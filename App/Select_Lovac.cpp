//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Igra.h"
#include "MainMenu.h"
#include "Info.h"
#include "Potjera.h"
#include "Select_Lovac.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image1Click(TObject *Sender)
{
	Selected->Caption = "Selected: " + Kotiga->Caption;
	lovac::vrijeme_za_odgovor = 5;
	lovac::tocnost = 75;
	lovac::ime = "Dean";
	lovac::koef= 1.2;

	Begin->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image1MouseEnter(TObject *Sender)
{
	Kotiga->Font->Style = TFontStyles() << fsUnderline << fsBold;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image1MouseLeave(TObject *Sender)
{
	Kotiga->Font->Style = TFontStyles()  << fsBold;

}
//---------------------------------------------------------------------------
void __fastcall TForm3::Image2Click(TObject *Sender)
{
	Selected->Caption = "Selected: " + Vukorepa->Caption;
	lovac::vrijeme_za_odgovor = 4;
	lovac::tocnost = 85;
	lovac::ime = "Mladen";
	lovac::koef = 1.5;


	Begin->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image3Click(TObject *Sender)
{
	Selected->Caption = "Selected: " + Mederal->Caption;
	lovac::vrijeme_za_odgovor = 2;
	lovac::tocnost = 95;
	lovac::ime = "Krešimir";
	lovac::koef = 2;

	Begin->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image2MouseEnter(TObject *Sender)
{
	Vukorepa->Font->Style = TFontStyles() << fsUnderline << fsBold;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image2MouseLeave(TObject *Sender)
{
    Vukorepa->Font->Style = TFontStyles() << fsBold;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image3MouseLeave(TObject *Sender)
{
    Mederal->Font->Style = TFontStyles() << fsBold;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image3MouseEnter(TObject *Sender)
{
	Mederal->Font->Style = TFontStyles() << fsUnderline << fsBold;
}
//---------------------------------------------------------------------------


void __fastcall TForm3::BeginClick(TObject *Sender)
{
	Form3->Visible = false;
	
	Form4->Show();
}
//---------------------------------------------------------------------------

