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
	T_User->Active = false;
	T_User->Active = true;

	if(login(T_User, E_Username->Text, E_Password->Text)){

		ShowMessage("Welcome: " + E_Username->Text);

		E_Username->Clear();
		E_Password->Clear();

		F_Login->Close();


	}
	else{
		ShowMessage("Wrong username/password!");


	}
}
//---------------------------------------------------------------------------
void __fastcall TF_Login::Button2Click(TObject *Sender)
{
    E_Username->Clear();
	E_Password->Clear();
	F_Login->Close();
}
//---------------------------------------------------------------------------
