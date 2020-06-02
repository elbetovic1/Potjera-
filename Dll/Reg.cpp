//---------------------------------------------------------------------------
#pragma hdrstop
#include <vcl.h>


#include "Reg.h"
#include "operacijeUser.h"
#include <idhashmessagedigest.hpp>
#include <idhashsha.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_Reg *F_Reg;
//---------------------------------------------------------------------------
__fastcall TF_Reg::TF_Reg(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TF_Reg::Button2Click(TObject *Sender)
{
	 E_Password->Clear();
	 E_Username->Clear();
	 E_Password2->Clear();
	 F_Reg->Close();


}
//---------------------------------------------------------------------------
void __fastcall TF_Reg::Button1Click(TObject *Sender)
{

	T_User->Active = false;
	T_User->Active = true;

	if(userExists(T_User, E_Username->Text)){
		ShowMessage("Username taken");

	}
	else if(E_Password->Text == E_Password2->Text){

		addUser(T_User, E_Username->Text, E_Password->Text);
        T_User->Active = false;
		T_User->Active = true;

        E_Password->Clear();
		E_Username->Clear();
		E_Password2->Clear();



	}
	else{
		ShowMessage("Passwords dont match");
    }

}
//---------------------------------------------------------------------------
