//---------------------------------------------------------------------------

#ifndef EditPitanjaH
#define EditPitanjaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class PACKAGE TF_EditPitanje : public TForm
{
__published:	// IDE-managed Components
	TListView *ListView1;
	TGroupBox *GroupBox1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TEdit *Edit1;
	TLabel *Label1;
	TButton *Button2;
	TButton *Button1;
	TButton *Button3;
	TButton *Button4;
	TXMLDocument *XMLDocument1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TF_EditPitanje(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_EditPitanje *F_EditPitanje;
//---------------------------------------------------------------------------
#endif