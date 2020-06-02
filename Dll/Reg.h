//---------------------------------------------------------------------------

#ifndef RegH
#define RegH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class PACKAGE TF_Reg : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *E_Username;
	TEdit *E_Password;
	TLabel *Label2;
	TButton *Button2;
	TButton *Button1;
	TEdit *E_Password2;
	TLabel *Label3;
	TADOTable *T_User;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TF_Reg(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_Reg *F_Reg;
//---------------------------------------------------------------------------
#endif
