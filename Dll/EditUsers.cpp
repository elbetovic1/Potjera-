//---------------------------------------------------------------------------

#pragma hdrstop
#include <vcl.h>


#include "EditUsers.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_EditUsers *F_EditUsers;
//---------------------------------------------------------------------------
__fastcall TF_EditUsers::TF_EditUsers(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TF_EditUsers::DBNavigator1Click(TObject *Sender, TNavigateBtn Button)

{
	T_User->Active=false;
    T_User->Active= true;
}
//---------------------------------------------------------------------------

