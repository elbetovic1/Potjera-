//---------------------------------------------------------------------------

#ifndef UserH
#define UserH

#include <vcl.h>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
#endif

class user{
public:

	static UnicodeString username;
	static int bank;
	static int br_tocnih;
	static bool loged;


};

UnicodeString user::username = "0";
int user::bank = 0;
int user::br_tocnih = 0;
bool user::loged = false;
