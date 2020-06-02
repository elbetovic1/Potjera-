//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GameOver.h"
#include "scoreboard.h"
#include "Info.h"
#include "MainMenu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
	_di_IXMLgamesType games = Getgames(XMLDocument1);

	_di_IXMLgameType game = games->Add();

	game->Set_username(korisnik::ime);
	game->Set_score(korisnik::score);
	game->Set_chaser(lovac::ime);
	game->Set_offer(korisnik::izabrana_ponuda);

	XMLDocument1->SaveToFile(XMLDocument1->FileName);

    ShowMessage("Score added");
}
//---------------------------------------------------------------------------


void __fastcall TForm5::Button2Click(TObject *Sender)
{
	Form5->Close();
	Form4->Close();
    Form1->Show();

}
//---------------------------------------------------------------------------

