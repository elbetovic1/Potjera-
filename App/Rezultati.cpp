//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Rezultati.h"
#include "scoreboard.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormShow(TObject *Sender)
{
    XMLDocument1->Refresh();
	_di_IXMLgamesType games = Getgames(XMLDocument1);

	ListView1->Items->Clear();

	 for(int i = 0; i< games->Count;i++){
		ListView1->Items->Add();
		ListView1->Items->Item[i]->Caption = games->game[i]->Get_username();
		ListView1->Items->Item[i]->SubItems->Add(games->game[i]->Get_score());
		ListView1->Items->Item[i]->SubItems->Add(games->game[i]->Get_chaser());
		ListView1->Items->Item[i]->SubItems->Add(games->game[i]->Get_offer());

	}

}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	XMLDocument1->Refresh();
    _di_IXMLgamesType games = Getgames(XMLDocument1);

	ListView1->Items->Clear();

	 for(int i = 0; i< games->Count;i++){
		ListView1->Items->Add();
		ListView1->Items->Item[i]->Caption = games->game[i]->Get_username();
		ListView1->Items->Item[i]->SubItems->Add(games->game[i]->Get_score());
		ListView1->Items->Item[i]->SubItems->Add(games->game[i]->Get_chaser());
		ListView1->Items->Item[i]->SubItems->Add(games->game[i]->Get_offer());

	}

}
//---------------------------------------------------------------------------

