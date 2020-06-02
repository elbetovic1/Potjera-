//---------------------------------------------------------------------------
#pragma hdrstop
#include <vcl.h>


#include "EditPitanja.h"
#include "pitanja.h"
#include "operacijePitanja.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_EditPitanje *F_EditPitanje;
//---------------------------------------------------------------------------
__fastcall TF_EditPitanje::TF_EditPitanje(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TF_EditPitanje::Button1Click(TObject *Sender)
{
	XMLDocument1->Refresh();
	_di_IXMLpitanjaType pitanja = Getpitanja(XMLDocument1);

	loadPitanja(pitanja);

}

//---------------------------------------------------------------------------
void __fastcall TF_EditPitanje::Button2Click(TObject *Sender)
{
	XMLDocument1->Refresh();
	_di_IXMLpitanjaType pitanja = Getpitanja(XMLDocument1);

    refreshEditPitanja(pitanja);



}
//---------------------------------------------------------------------------
void __fastcall TF_EditPitanje::Button4Click(TObject *Sender)
{
	XMLDocument1->Refresh();
	_di_IXMLpitanjaType pitanja = Getpitanja(XMLDocument1);
	savePitanja(pitanja);
}
//---------------------------------------------------------------------------
void __fastcall TF_EditPitanje::Button3Click(TObject *Sender)
{
	XMLDocument1->Refresh();
	_di_IXMLpitanjaType pitanja = Getpitanja(XMLDocument1);

	deletePitanja(pitanja);
    refreshEditPitanja(pitanja);



}
//---------------------------------------------------------------------------

void __fastcall TF_EditPitanje::FormCreate(TObject *Sender)
{
	XMLDocument1->Refresh();
}
//---------------------------------------------------------------------------

