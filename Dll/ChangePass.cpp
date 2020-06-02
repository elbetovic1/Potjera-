//---------------------------------------------------------------------------
#pragma hdrstop
#include <vcl.h>


#include "ChangePass.h"
#include "operacijeUser.h"
#include <idhashmessagedigest.hpp>
#include <idhashsha.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_ChangePass *F_ChangePass;
//---------------------------------------------------------------------------
__fastcall TF_ChangePass::TF_ChangePass(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TF_ChangePass::Button1Click(TObject *Sender)
{

	if(login(T_User, E_Username->Text, E_Password->Text) && E_NewPassword->GetTextLen() != 0){

		setPass(T_User,E_Username->Text,E_NewPassword->Text);

       T_User->Active = false;
	   T_User->Active = true;

       E_Password->Clear();
	   E_Username->Clear();
	   E_NewPassword->Clear();



	}

	else{
		ShowMessage("Wrong username or password");
	}
}
//---------------------------------------------------------------------------

void __fastcall TF_ChangePass::Button2Click(TObject *Sender)
{
	 E_Password->Clear();
	 E_Username->Clear();
	 E_NewPassword->Clear();
	 F_ChangePass->Close();
}
//---------------------------------------------------------------------------

