//---------------------------------------------------------------------------

#pragma hdrstop
#include <vcl.h>
#include <iostream>


#include "MainMenu.h"
#include "NovoPitanje.h"
#include "EditPitanja.h"
#include "Login.h"
#include "Reg.h"
#include "Igra.h"
#include "Info.h"
#include "ChangePass.h"
#include "Rezultati.h"
#include "EditUsers.h"
#include "GameOver.h"
#include <idhashmessagedigest.hpp>
#include <idhashsha.hpp>
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"


using namespace std;

extern bool loged_in;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::New1Click(TObject *Sender)
{
	F_NovoPitanje->ShowModal();


}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	F_EditPitanje->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	F_Login->ShowModal();

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
    F_Reg->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{

	if(korisnik::ulogiran){


		Form1->Visible= false;
		Form2->ShowModal();

	}
	else{
	ShowMessage("Please login to play");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Click(TObject *Sender)
{
    F_ChangePass->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Scoreboard1Click(TObject *Sender)
{
	 Form6->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditAdminonly1Click(TObject *Sender)
{
	F_EditUsers->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Users1Click(TObject *Sender)
{
	if(korisnik::ime == "admin" && korisnik::ulogiran){

		EditAdminonly1->Enabled = true;
	}
	else{
		EditAdminonly1->Enabled = false;
	}
}
//---------------------------------------------------------------------------

