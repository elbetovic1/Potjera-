//---------------------------------------------------------------------------

#ifndef EditUserH
#define EditUserH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class PACKAGE TF_EditUser : public TForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TF_EditUser(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_EditUser *F_EditUser;
//---------------------------------------------------------------------------
#endif