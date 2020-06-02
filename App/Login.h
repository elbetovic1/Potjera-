//---------------------------------------------------------------------------

#ifndef LoginH
#define LoginH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------


class PACKAGE TF_Login : public TForm
{
__published:	// IDE-managed Components
	TEdit *E_Username;
	TEdit *E_Password;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Button1;
	TButton *Button2;
	TADOTable *T_User;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:
			static bool logg;

	__fastcall TF_Login(TComponent* Owner);
};

bool TF_Login::logg = false;
//---------------------------------------------------------------------------
extern PACKAGE TF_Login *F_Login;
//---------------------------------------------------------------------------
#endif