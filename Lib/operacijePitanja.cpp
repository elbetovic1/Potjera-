//---------------------------------------------------------------------------

#pragma hdrstop

#include "operacijePitanja.h"
#include "NovoPitanje.h"
#include "EditPitanja.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void refreshPitanja(_di_IXMLpitanjaType pitanja){


   F_NovoPitanje->ListView1->Items->Clear();

   for(int i = 0; i<pitanja->Count;i++){
		F_NovoPitanje->ListView1->Items->Add();
		F_NovoPitanje->ListView1->Items->Item[i]->Caption = pitanja->pitanje[i]->Get_pit();
		F_NovoPitanje->ListView1->Items->Item[i]->SubItems->Add(pitanja->pitanje[i]->Get_odg1());
		F_NovoPitanje->ListView1->Items->Item[i]->SubItems->Add(pitanja->pitanje[i]->Get_odg2());
		F_NovoPitanje->ListView1->Items->Item[i]->SubItems->Add(pitanja->pitanje[i]->Get_odg3());

	}


}

void refreshEditPitanja(_di_IXMLpitanjaType pitanja){


   F_EditPitanje->ListView1->Items->Clear();

   for(int i = 0; i<pitanja->Count;i++){
		F_EditPitanje->ListView1->Items->Add();
		F_EditPitanje->ListView1->Items->Item[i]->Caption = pitanja->pitanje[i]->Get_pit();
		F_EditPitanje->ListView1->Items->Item[i]->SubItems->Add(pitanja->pitanje[i]->Get_odg1());
		F_EditPitanje->ListView1->Items->Item[i]->SubItems->Add(pitanja->pitanje[i]->Get_odg2());
		F_EditPitanje->ListView1->Items->Item[i]->SubItems->Add(pitanja->pitanje[i]->Get_odg3());

	}


}

void addPitanja(_di_IXMLpitanjaType pitanja){

	int t = 0;


	if(F_NovoPitanje->RadioButton1->Checked){ t = 1;}
	else if (F_NovoPitanje->RadioButton2->Checked){t=2;}
	else if (F_NovoPitanje->RadioButton3->Checked){t=3;}



	if(F_NovoPitanje->Edit1->GetTextLen() != 0 &&  F_NovoPitanje->Edit2->GetTextLen() != 0 && F_NovoPitanje->Edit3->GetTextLen() != 0 && F_NovoPitanje->Edit4->GetTextLen() != 0 && t != 0){

			_di_IXMLpitanjeType pitanje = pitanja->Add();

			pitanje->Set_tocan(t);
			pitanje->Set_pit(F_NovoPitanje->Edit1->Text);
			pitanje->Set_odg1(F_NovoPitanje->Edit2->Text);
			pitanje->Set_odg2(F_NovoPitanje->Edit3->Text);
			pitanje->Set_odg3(F_NovoPitanje->Edit4->Text);

			F_NovoPitanje->XMLDocument1->SaveToFile(F_NovoPitanje->XMLDocument1->FileName);
			ShowMessage("You succesfully added a question");

			F_NovoPitanje->Edit1->Clear();
			F_NovoPitanje->Edit2->Clear();
			F_NovoPitanje->Edit3->Clear();
			F_NovoPitanje->Edit4->Clear();

	}

	else{
		ShowMessage("All the fields must be filled");
	}


}

void deletePitanja(_di_IXMLpitanjaType pitanja){

		pitanja->Delete(F_EditPitanje->ListView1->ItemIndex);
       ShowMessage("You succesfully deleted a question");


		F_EditPitanje->XMLDocument1->SaveToFile(F_EditPitanje->XMLDocument1->FileName);

		F_EditPitanje->Edit1->Clear();
		F_EditPitanje->Edit2->Clear();
		F_EditPitanje->Edit3->Clear();
		F_EditPitanje->Edit4->Clear();

}

void loadPitanja(_di_IXMLpitanjaType pitanja){

	_di_IXMLpitanjeType pitanje = pitanja->Get_pitanje(F_EditPitanje->ListView1->ItemIndex);

	F_EditPitanje->Edit1->Text = pitanje->Get_pit();
	F_EditPitanje->Edit2->Text = pitanje->Get_odg1();
	F_EditPitanje->Edit3->Text = pitanje->Get_odg2();
	F_EditPitanje->Edit4->Text = pitanje->Get_odg3();

	if(pitanje->Get_tocan() == 1)
	{
		F_EditPitanje->RadioButton1->Checked = 1;
	}
	if(pitanje->Get_tocan() == 2)
	{
		F_EditPitanje->RadioButton2->Checked = 2;
	}
	if(pitanje->Get_tocan() == 3)
	{
		F_EditPitanje->RadioButton3->Checked = 3;
	}


};

void savePitanja(_di_IXMLpitanjaType pitanja){

	int t = 0;


	if(F_EditPitanje->RadioButton1->Checked){ t = 1;}
	else if (F_EditPitanje->RadioButton2->Checked){t=2;}
	else if (F_EditPitanje->RadioButton3->Checked){t=3;}

	if(F_EditPitanje->Edit1->GetTextLen() != 0 &&  F_EditPitanje->Edit2->GetTextLen() != 0 && F_EditPitanje->Edit3->GetTextLen() != 0 && F_EditPitanje->Edit4->GetTextLen() != 0 && t != 0){

		_di_IXMLpitanjeType pitanje = pitanja->Get_pitanje(F_EditPitanje->ListView1->ItemIndex);

		pitanje->Set_tocan(t);
		pitanje->Set_pit(F_EditPitanje->Edit1->Text);
		pitanje->Set_odg1(F_EditPitanje->Edit2->Text);
		pitanje->Set_odg2(F_EditPitanje->Edit3->Text);
		pitanje->Set_odg3(F_EditPitanje->Edit4->Text);

		F_EditPitanje->XMLDocument1->SaveToFile(F_EditPitanje->XMLDocument1->FileName);
		ShowMessage("You succesfully edited a question");

		F_EditPitanje->Edit1->Clear();
		F_EditPitanje->Edit2->Clear();
		F_EditPitanje->Edit3->Clear();
		F_EditPitanje->Edit4->Clear();


	}

	else{
		ShowMessage("All the fields must be filled");
	}
}
