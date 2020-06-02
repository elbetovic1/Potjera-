//---------------------------------------------------------------------------
#pragma hdrstop
#include <vcl.h>


#include "NovoPitanje.h"
#include "pitanja.h"
#include "operacijePitanja.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_NovoPitanje *F_NovoPitanje;
//---------------------------------------------------------------------------
__fastcall TF_NovoPitanje::TF_NovoPitanje(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------


void __fastcall TF_NovoPitanje::Button2Click(TObject *Sender)
{
	XMLDocument1->Refresh();
	_di_IXMLpitanjaType pitanja = Getpitanja(XMLDocument1);

	refreshPitanja(pitanja);

}
//---------------------------------------------------------------------------

void __fastcall TF_NovoPitanje::Button1Click(TObject *Sender)
{
	XMLDocument1->Refresh();
	_di_IXMLpitanjaType pitanja = Getpitanja(XMLDocument1);
	addPitanja(pitanja);
}
//---------------------------------------------------------------------------

void __fastcall TF_NovoPitanje::FormCreate(TObject *Sender)
{
	XMLDocument1->Refresh();
}
//---------------------------------------------------------------------------
