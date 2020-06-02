//---------------------------------------------------------------------------

#ifndef IgraH
#define IgraH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Vcl.Buttons.hpp>
#include <vector>

using namespace std;
//---------------------------------------------------------------------------

void ispuni();
void ucitaj_pitanje();
void reset_game();

class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *B_Start;
	TEdit *Edit1;
	TXMLDocument *XMLDocument1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TLabel *Label1;
	TTimer *Timer1;
	TLabel *Label2;
	TButton *B_Next;
	TButton *B_Continue;
	TButton *B_TryAgain;
	void __fastcall B_StartClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall B_NextClick(TObject *Sender);
	void __fastcall B_TryAgainClick(TObject *Sender);
	void __fastcall B_ContinueClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);



private:	// User declarations
public:
		static int brojac;
		vector<int> brpit;
		int tocan;
		int odgovor;
		static int score;
		int vrijeme;



	__fastcall TForm2(TComponent* Owner);
};

int TForm2::brojac = 0;
int TForm2::score = 0;

//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
