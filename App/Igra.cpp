//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Igra.h"
#include "pitanja.h"
#include "Select_Lovac.h"
#include "MainMenu.h"
#include "Potjera.h"
#include "Info.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <algorithm>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

using namespace std;
TForm2 *Form2;
//---------------------------------------------------------------------------

int randomfunc(int r)
{
	return rand() % r;
}

void ispuni(){

	srand(unsigned(time(0)));

    Form2->XMLDocument1->Refresh();
	_di_IXMLpitanjaType pitanja = Getpitanja(Form2->XMLDocument1);

	for(int i = 0; i < pitanja->Count; i++){

		Form2->brpit.push_back(i);

	}

	random_shuffle(Form2->brpit.begin(), Form2->brpit.end(),randomfunc);

	Form2->Label1->Caption = ("Score: " + Form2->score);




};

void reset_game(){


    Form2->brpit.clear();

	 Form2->B_Start->Visible = true ;
	 Form2->Button1->Visible = false;
	 Form2->Button2->Visible = false;
	 Form2->Button3->Visible = false;
	 Form2->Edit1->Visible = false;
	 Form2->B_Next->Visible = false;
	 Form2->Timer1->Enabled = false;
	 Form2->B_Continue->Visible = false;
	 Form2->B_TryAgain->Visible = false;

	 Form2->score = 0;
	 Form2->Label1->Caption = ("Score: " + (UnicodeString)Form2->score);
	 Form2->Label2->Caption = ("Time: ");

	 lovac::pozicija_l = 0;
	

     Form2->brojac = 0;


};

void ucitaj_pitanje(){



	_di_IXMLpitanjaType pitanja = Getpitanja(Form2->XMLDocument1);



	_di_IXMLpitanjeType pitanje = pitanja->Get_pitanje(Form2->brpit[Form2->brojac]);

	Form2->Edit1->Text = pitanje->Get_pit();
	Form2->Button1->Caption = "A) " + pitanje->Get_odg1();
	Form2->Button2->Caption = "B) " + pitanje->Get_odg2();
	Form2->Button3->Caption = "C) " + pitanje->Get_odg3();

	Form2->tocan = pitanje->Get_tocan();


};


__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::B_StartClick(TObject *Sender)
{


	 B_Start->Visible = false;
	 Button1->Visible = true;
	 Button2->Visible = true;
	 Button3->Visible = true;
	 Edit1->Visible = true;
	 B_Next->Visible = true;

	 ispuni();

	 ucitaj_pitanje();

     Form2->score = 0;
	 Form2->Label1->Caption = ("Score: " + (UnicodeString)Form2->score);
	 Form2->vrijeme = 30;
	 Form2->brojac++;
     Form2->Timer1->Enabled = true;



}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button1Click(TObject *Sender)
{
	Form2->odgovor = 1;

	if(Form2->odgovor == Form2->tocan){

		Form2->score += 3500;
		ShowMessage("Tocno");
        Form2->Label1->Caption = ("Score: " + (UnicodeString)Form2->score);
	}
    else{

		Form2->score -= 3500;
		ShowMessage("Netocno");
		Form2->Label1->Caption = ("Score: " + (UnicodeString)Form2->score);

	}



	ucitaj_pitanje();
	Form2->brojac++;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	Form2->odgovor = 2;

	if(Form2->odgovor == Form2->tocan){

		Form2->score += 3500;
		ShowMessage("Tocno");
		Form2->Label1->Caption = ("Score: " + (UnicodeString)Form2->score);
	}
	else{

		Form2->score -= 3500;
		ShowMessage("Netocno");
		Form2->Label1->Caption = ("Score: " + (UnicodeString)Form2->score);

	}

	ucitaj_pitanje();
	Form2->brojac++;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
	Form2->odgovor = 3;

	if(Form2->odgovor == Form2->tocan){

		Form2->score += 3500;
		ShowMessage("Tocno");
		Form2->Label1->Caption = ("Score: " + (UnicodeString)Form2->score);
	}
    else{

		Form2->score -= 3500;
		ShowMessage("Netocno");
		Form2->Label1->Caption = ("Score: " + (UnicodeString)Form2->score);

	}

	ucitaj_pitanje();
	Form2->brojac++;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
	Form2->Label2->Caption = ("Time: " + (UnicodeString)Form2->vrijeme);

	if(Form2->vrijeme == 0){

		Button1->Visible = false;
		Button2->Visible = false;
		Button3->Visible = false;
		Timer1->Enabled = false;
		B_Next->Visible = false;
		Edit1->Clear();



		B_TryAgain->Visible = true;

		if(score > 0){
			B_Continue->Visible =true;
            korisnik::score = score;
		}
	};
    Form2->vrijeme--;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::B_NextClick(TObject *Sender)
{
      ucitaj_pitanje();
	  Form2->brojac++;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::B_TryAgainClick(TObject *Sender)
{
	reset_game();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::B_ContinueClick(TObject *Sender)
{
	Form3->Show();
    B_Continue->Visible = false;
	Form2->Visible = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
	 reset_game();
	 Form1->Visible = true;
}
//---------------------------------------------------------------------------

