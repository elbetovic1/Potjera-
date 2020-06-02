//---------------------------------------------------------------------------
#pragma hdrstop
#include <vcl.h>
#include <iostream>

#include "Login.h"
#include "MainMenu.h"
#include "operacijeUser.h"
#include "Info.h"
#include <idhashmessagedigest.hpp>
#include <idhashsha.hpp>
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

using namespace std;

TF_Login *F_Login;
//---------------------------------------------------------------------------
__fastcall TF_Login::TF_Login(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TF_Login::Button1Click(TObject *Sender)
{


	if(login(T_User, E_Username->Text, E_Password->Text)){
		F_Login->Close();
		ShowMessage("Welcome: " + E_Username->Text);
        korisnik::ulogiran = true;


	}
	else{
		ShowMessage("Wrong username/password!");


	}
}
//---------------------------------------------------------------------------
void __fastcall TF_Login::Button2Click(TObject *Sender)
{
	F_Login->Close();
}
//---------------------------------------------------------------------------
