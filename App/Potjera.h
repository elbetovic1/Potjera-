//---------------------------------------------------------------------------

#ifndef PotjeraH
#define PotjeraH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <vector>

using namespace std;
//---------------------------------------------------------------------------

void reset_game_glavna();
void generiraj_odg();
void fill_vectors();
void postavi_pit();

class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *B_Start;
	TShape *Shape1;
	TShape *s7;
	TShape *s6;
	TShape *s5;
	TShape *s4;
	TShape *s3;
	TShape *s2;
	TShape *s1;
	TXMLDocument *XMLDocument1;
	TLabel *info_label;
	TLabel *l7;
	TLabel *l2;
	TLabel *l3;
	TLabel *l4;
	TLabel *l5;
	TLabel *l6;
	TLabel *l1;
	TLabel *Selected;
	TTimer *Timer1;
	TShape *S_Lovac;
	TLabel *L_Lovac;
	TShape *S_Igrac;
	TLabel *L_Igrac;
	TButton *Offers;
	TButton *B_Next;
	void __fastcall B_StartClick(TObject *Sender);
	void __fastcall l2MouseEnter(TObject *Sender);
	void __fastcall l3MouseEnter(TObject *Sender);
	void __fastcall l4MouseEnter(TObject *Sender);
	void __fastcall l4MouseLeave(TObject *Sender);
	void __fastcall l3MouseLeave(TObject *Sender);
	void __fastcall l2MouseLeave(TObject *Sender);
	void __fastcall l2Click(TObject *Sender);
	void __fastcall l3Click(TObject *Sender);
	void __fastcall l4Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall OffersClick(TObject *Sender);
	void __fastcall B_NextClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);

private:	// User declarations
public:     int tocan;
			int visa;
			int niza;
			int srednja;

			int time_t;

            int igrac_odgovor;

			vector<TShape*> ui_shape;
			vector<TLabel*> ui_label;


	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
