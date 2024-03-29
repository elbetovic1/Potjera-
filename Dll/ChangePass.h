//---------------------------------------------------------------------------

#ifndef ChangePassH
#define ChangePassH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class PACKAGE TF_ChangePass : public TForm
{
__published:	// IDE-managed Components
	TEdit *E_Username;
	TLabel *Label1;
	TLabel *Label3;
	TEdit *E_NewPassword;
	TLabel *Label2;
	TEdit *E_Password;
	TADOTable *T_User;
	TButton *Button2;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TF_ChangePass(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_ChangePass *F_ChangePass;
//---------------------------------------------------------------------------
#endif
