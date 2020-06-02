//---------------------------------------------------------------------------

#ifndef MainMenuH
#define MainMenuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class PACKAGE TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Button2;
	TMainMenu *MainMenu1;
	TMenuItem *Game1;
	TMenuItem *Question1;
	TMenuItem *New1;
	TMenuItem *Edit1;
	TMenuItem *Users1;
	TMenuItem *Edit2;
	TButton *Button3;
	TMenuItem *Scoreboard1;
	TButton *Button4;
	void __fastcall New1Click(TObject *Sender);
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Edit2Click(TObject *Sender);
	void __fastcall Scoreboard1Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:
			static bool logogo;

	__fastcall TForm1(TComponent* Owner);
};

bool TForm1::logogo = false;
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
