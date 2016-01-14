// BWF MetaEdit Riff - RIFF stuff for BWF MetaEdit
//
// This code was created in 2010 for the Library of Congress and the
// other federal government agencies participating in the Federal Agencies
// Digitization Guidelines Initiative and it is in the public domain.
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//---------------------------------------------------------------------------
#include "Riff/Riff_Chunks.h"
//---------------------------------------------------------------------------

//***************************************************************************
// WAVE iXML
//***************************************************************************

//---------------------------------------------------------------------------
void Riff_WAVE_iXML::Read_Internal ()
{
    //Integrity
    if (Global->iXML)
        throw exception_valid("2 iXML chunks");

    //Reading
    Read_Internal_ReadAllInBuffer();
    
    //Filling
    Global->iXML=new Riff_Base::global::chunk_strings;
    Get_String(Chunk.Content.Size, Global->iXML->Strings["ixml"]);
}

//***************************************************************************
// Modify
//***************************************************************************

//---------------------------------------------------------------------------
void Riff_WAVE_iXML::Modify_Internal ()
{
    if (Global->iXML==NULL
     || Global->iXML->Strings["ixml"].empty())
    {
        Chunk.Content.IsRemovable=true;
        return;
    }

    //Calculating size
    const string &Value=Global->iXML->Strings["ixml"];
    if (Value.size()>=0xFFFFFFFF)
        return; //TODO: error

    //Creating buffer
    Chunk.Content.Buffer_Offset=0;
    Chunk.Content.Size=Value.size();
    delete[] Chunk.Content.Buffer; Chunk.Content.Buffer=new int8u[Value.size()];

    Put_String(Value.size(), Value);

    Chunk.Content.IsModified=true;
    Chunk.Content.Size_IsModified=true;
}

//***************************************************************************
// Write
//***************************************************************************

//---------------------------------------------------------------------------
void Riff_WAVE_iXML::Write_Internal ()
{
    Riff_Base::Write_Internal(Chunk.Content.Buffer, (size_t)Chunk.Content.Size);
}

