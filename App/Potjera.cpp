//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdlib.h>
#include <time.h>
#pragma hdrstop

#include "Potjera.h"
#include "Igra.h"
#include "Info.h"
#include "Select_Lovac.h"
#include "pitanja.h"
#include "GameOver.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void postavi_pit(){


	_di_IXMLpitanjaType pitanja = Getpitanja(Form4->XMLDocument1);

	_di_IXMLpitanjeType pitanje = pitanja->Get_pitanje(Form2->brpit[Form2->brojac]);

	Form4->Edit1->Text = pitanje->Get_pit();
	Form4->Button1->Caption = "A) " + pitanje->Get_odg1();
	Form4->Button2->Caption = "B) " + pitanje->Get_odg2();
	Form4->Button3->Caption = "C) " + pitanje->Get_odg3();


	pitanje_::pitanje = pitanje->Get_pit();

	pitanje_::odgovori.push_back(pitanje->Get_odg1());
	pitanje_::odgovori.push_back(pitanje->Get_odg2());
	pitanje_::odgovori.push_back(pitanje->Get_odg3());

	Form4->tocan = pitanje->Get_tocan();




};

void fill_vectors(){

	Form4->ui_shape.push_back(Form4->s1);
	Form4->ui_shape.push_back(Form4->s2);
	Form4->ui_shape.push_back(Form4->s3);
	Form4->ui_shape.push_back(Form4->s4);
	Form4->ui_shape.push_back(Form4->s5);
	Form4->ui_shape.push_back(Form4->s6);
	Form4->ui_shape.push_back(Form4->s7);

	Form4->ui_label.push_back(Form4->l1);
	Form4->ui_label.push_back(Form4->l2);
	Form4->ui_label.push_back(Form4->l3);
	Form4->ui_label.push_back(Form4->l4);
	Form4->ui_label.push_back(Form4->l5);
	Form4->ui_label.push_back(Form4->l6);
	Form4->ui_label.push_back(Form4->l7);


};

void create_offers(){

    Form4->srednja = korisnik::score;

	Form4->visa = Form4->srednja * lovac::koef;

	Form4->niza = Form4->srednja / 2;



};

void generiraj_odg(){

        srand (time(NULL));
		bool TocnoNetocno = (rand() % 100) < lovac::tocnost;

		if(TocnoNetocno){

			lovac::odgovor = Form4->tocan;

		}
		else
		{
            int netocan1;
			int netocan2;

			bool netocan_rand = rand() % 2;

			switch (Form4->tocan) {
			case 1:

			netocan1 = 2;
			netocan2 = 3;



				if(netocan_rand){

					lovac::odgovor = netocan1;

				}
				else{

					lovac::odgovor = netocan2;

				}
			break;

			case 2:

			netocan1 = 1;
			netocan2 = 3;


				if(netocan_rand){

					lovac::odgovor = netocan1;

				}
				else{

					lovac::odgovor = netocan2;

				}
			break;

			case 3:

			netocan1 = 1;
			netocan2 = 2;


				if(netocan_rand){

					lovac::odgovor = netocan1;

				}
				else{

					lovac::odgovor = netocan2;

				}
			break;

			default:
			break;
			}

  }
};

void reset_game_glavna(){




	 Form4->Timer1->Enabled = false;
	 Form4->B_Start->Visible = false;
     Form4->Button1->Enabled = true;
	 Form4->Button2->Enabled = true;
	 Form4->Button3->Enabled = true;
	 Form4->Button1->Visible = false;
	 Form4->Button2->Visible = false;
	 Form4->Button3->Visible = false;

     Form4->info_label->Caption = "Please select a offer";

	 Form4->B_Next->Visible = false;
	 Form4->Offers->Visible = true;
     Form4->Edit1->Text = "";


	 for(unsigned int i = 0; i<Form4->ui_shape.size();i++){

		Form4->ui_shape[i]->Brush->Color = clHotLight;

	};

	for(unsigned int i = 0; i<Form4->ui_label.size();i++){

		Form4->ui_label[i]->Caption = "";

	};

    Form4->ui_label.clear();
	Form4->ui_shape.clear();
	pitanje_::odgovori.clear();

	Form4->S_Igrac->Visible = false;
	Form4->L_Igrac->Caption = "";
	Form4->L_Lovac->Caption = "";
	Form4->S_Lovac->Visible = false;

	lovac::pozicija_l = 0;
	korisnik::pozicija = 0;

	Form4->time_t = 0;




};


//---------------------------------------------------------------------------
void __fastcall TForm4::B_StartClick(TObject *Sender)
{
	 B_Start->Visible = false;
	 Button1->Visible = true;
	 Button2->Visible = true;
	 Button3->Visible = true;

	 l2->Enabled = true;
     l3->Enabled = true;
	 l4->Enabled = true;

	 Selected->Caption = "";
     info_label->Caption = "";

	 srednja= Form2->score;

	 time_t = 0;

	 Timer1->Enabled = true;

	 postavi_pit();

	 Form2->brojac++;

	 for(unsigned int i = korisnik::pozicija; i<ui_shape.size();i++){

		ui_shape[i]->Brush->Color = clNavy;

	};





}
//---------------------------------------------------------------------------

void __fastcall TForm4::l2MouseEnter(TObject *Sender)
{
	ui_label[1]->Font->Style = TFontStyles() << fsUnderline << fsBold;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::l2MouseLeave(TObject *Sender)
{
	ui_label[1]->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::l3MouseEnter(TObject *Sender)
{
    ui_label[2]->Font->Style = TFontStyles() << fsUnderline << fsBold;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::l3MouseLeave(TObject *Sender)
{
	ui_label[2]->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::l4MouseEnter(TObject *Sender)
{
    ui_label[3]->Font->Style = TFontStyles() << fsUnderline << fsBold;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::l4MouseLeave(TObject *Sender)
{
	ui_label[3]->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------


void __fastcall TForm4::l2Click(TObject *Sender)
{
	B_Start->Visible = true;
	Offers->Visible = false;



	Selected->Caption = "Selected: " + (UnicodeString)visa;
	korisnik::izabrana_ponuda = "visa";


	l3->Enabled = false;
	l4->Enabled = false;

    l3->Caption = "";
	l4->Caption = "";

	korisnik::score = visa;
	korisnik::pozicija = 2;


}
//---------------------------------------------------------------------------

void __fastcall TForm4::l3Click(TObject *Sender)
{
	B_Start->Visible = true;
	Offers->Visible = false;

	Selected->Caption = "Selected: " + (UnicodeString)srednja;
	korisnik::izabrana_ponuda = "visa";

	l2->Enabled = false;
	l4->Enabled = false;

	l2->Caption = "";
	l4->Caption = "";

	korisnik::score = srednja;
	korisnik::pozicija = 3;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::l4Click(TObject *Sender)
{
	B_Start->Visible = true;
    Offers->Visible = false;

	Selected->Caption = "Selected: " + (UnicodeString)niza;
	korisnik::izabrana_ponuda = "visa";

	l2->Enabled = false;
	l3->Enabled = false;

	l2->Caption = "";
	l3->Caption = "";

	korisnik::score = niza;
	korisnik::pozicija = 4;

}
//---------------------------------------------------------------------------


void __fastcall TForm4::Timer1Timer(TObject *Sender)
{

	if(time_t == lovac::vrijeme_za_odgovor){
	   generiraj_odg();
	   L_Lovac->Caption = lovac::ime;
	   S_Lovac->Visible = true;


	}

	if(time_t == lovac::vrijeme_za_odgovor + 5){

		Button1->Enabled= false;
		Button2->Enabled= false;
		Button3->Enabled= false;


	}

	if(time_t == lovac::vrijeme_za_odgovor + 6){

		if(igrac_odgovor == 0){
			info_label->Caption = "Your answer: No answer";
		}

		else{
			info_label->Caption = "Your answer: " + pitanje_::odgovori[igrac_odgovor-1];
		}


	}

	if(time_t == lovac::vrijeme_za_odgovor + 8){

		info_label->Caption = "Right answer: " + pitanje_::odgovori[tocan-1];

	}
	if(time_t == lovac::vrijeme_za_odgovor + 9){

		if(igrac_odgovor==tocan && korisnik::pozicija < 7){

			ui_shape[korisnik::pozicija]->Brush->Color = clHotLight;

			for(unsigned int i = 0; i<ui_label.size();i++){

				ui_label[i]->Caption = "";

			};

			ui_label[korisnik::pozicija]->Caption = (UnicodeString)korisnik::score;

			korisnik::pozicija++;

		}
		else if(igrac_odgovor==tocan){

			korisnik::pozicija++;

		}


	}

	if(time_t == lovac::vrijeme_za_odgovor + 10){

		info_label->Caption = "Chaser answered: " + pitanje_::odgovori[lovac::odgovor-1];


	}

	if(time_t == lovac::vrijeme_za_odgovor + 11){

		igrac_odgovor = 0;
		B_Next->Visible = true;
		if(lovac::odgovor == tocan){

			ui_shape[lovac::pozicija_l]->Brush->Color = clRed;

			lovac::pozicija_l++;


		}
		if(korisnik::pozicija == 8){

			Timer1->Enabled = false;
			B_Next->Visible = false;

			Form5->Label1->Caption = "Congratiulations, you won the chase";
			Form5->Label2->Caption = "Score: " + (UnicodeString)korisnik::score;

			Form5->Show();

		}
		if(korisnik::pozicija == lovac::pozicija_l){

			Timer1->Enabled = false;
			B_Next->Visible = false;

			korisnik::score = 0;

			Form5->Label1->Caption = "Better luck next time";
			Form5->Label2->Caption = "Score: " + (UnicodeString)korisnik::score;

			Form5->Show();


		}




	}





	time_t++;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
	igrac_odgovor = 1;

	Button1->Enabled= false;
	Button2->Enabled= false;
	Button3->Enabled= false;

	S_Igrac->Visible = true;
	L_Igrac->Caption = korisnik::ime;

}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
    igrac_odgovor = 2;

	Button1->Enabled= false;
	Button2->Enabled= false;
	Button3->Enabled= false;

    S_Igrac->Visible = true;
	L_Igrac->Caption = korisnik::ime;

}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button3Click(TObject *Sender)
{
	igrac_odgovor = 3;

	Button1->Enabled= false;
	Button2->Enabled= false;
	Button3->Enabled= false;

    S_Igrac->Visible = true;
	L_Igrac->Caption = korisnik::ime;

}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form2->Visible= true;

	reset_game_glavna();
}
//---------------------------------------------------------------------------


void __fastcall TForm4::OffersClick(TObject *Sender)
{
	fill_vectors();
	create_offers();

	ui_label[1]->Caption = (UnicodeString)visa;
	ui_label[2]->Caption = (UnicodeString)srednja;
	ui_label[3]->Caption = (UnicodeString)niza;

}
//---------------------------------------------------------------------------

void __fastcall TForm4::B_NextClick(TObject *Sender)
{
	 time_t = 0;

     B_Next->Visible = false;
     pitanje_::odgovori.clear();

	 Timer1->Enabled = true;

	 L_Lovac->Caption = "";
	 S_Lovac->Visible = false;

	 S_Igrac->Visible = false;
	 L_Igrac->Caption = "";

     info_label->Caption = "";

	 postavi_pit();
     Form2->brojac++;

	 Button1->Enabled= true;
	 Button2->Enabled= true;
	 Button3->Enabled= true;
}
//---------------------------------------------------------------------------


void __fastcall TForm4::FormShow(TObject *Sender)
{

    reset_game_glavna();
}
//---------------------------------------------------------------------------
