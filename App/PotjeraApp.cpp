//---------------------------------------------------------------------------

#pragma hdrstop
#include <vcl.h>

#include <tchar.h>
#include "operacijeUser.h"
#include "NovoPitanje.h"
#include "EditPitanja.h"
#include "Login.h"
#include "pitanja.h"
#include "MainMenu.h"
#include "Reg.h"
#include "Igra.h"
#include "ChangePass.h"
#include "Select_Lovac.h"
#include "EditUsers.h"
#include "Igra.h"
#include "Potjera.h"



//---------------------------------------------------------------------------
USEFORM("Rezultati.cpp", Form6);
USEFORM("..\Dll\Login.cpp", F_Login);
USEFORM("Select_Lovac.cpp", Form3);
USEFORM("Igra.cpp", Form2);
USEFORM("GameOver.cpp", Form5);
USEFORM("Potjera.cpp", Form4);
USEFORM("MainMenu.cpp", Form1);
//---------------------------------------------------------------------------
extern bool loged_in;

int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TF_NovoPitanje), &F_NovoPitanje);
		Application->CreateForm(__classid(TF_EditPitanje), &F_EditPitanje);
		Application->CreateForm(__classid(TF_Reg), &F_Reg);
		Application->CreateForm(__classid(TF_Login), &F_Login);
		Application->CreateForm(__classid(TF_ChangePass), &F_ChangePass);
		Application->CreateForm(__classid(TF_EditUsers), &F_EditUsers);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->Title = "The Chase";
		Application->Run();



		}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}







	return 0;
}
//---------------------------------------------------------------------------