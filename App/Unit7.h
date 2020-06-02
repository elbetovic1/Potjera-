//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TADOTable *T_User;
	TDBGrid *DBGrid1;
	TADOConnection *ADOConnection1;
	TDataSource *DataSource1;
	TIntegerField *T_UserID;
	TStringField *T_UserUsername;
	TStringField *T_UserPassword;
	TLabel *Label1;
	TDBEdit *DBEdit1;
	TLabel *Label2;
	TDBEdit *DBEdit2;
	TLabel *Label3;
	TDBEdit *DBEdit3;
	TDBNavigator *DBNavigator1;
private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
