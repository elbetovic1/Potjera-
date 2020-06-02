//---------------------------------------------------------------------------

#pragma hdrstop
#include "operacijeUser.h"
#include "Login.h"
#include "Info.h"
#include <idhashmessagedigest.hpp>
#include <idhashsha.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)



bool login(TADOTable* T_User, UnicodeString username, UnicodeString password){

	bool success = false;


	TIdHashSHA1* sha1 = new TIdHashSHA1;

	T_User->First();


	for (int i = 0; i < T_User->RecordCount; i++) {
		if(T_User->FieldByName("Username")->AsString == username){
			if(T_User->FieldByName("Password")->AsString.UpperCase() == sha1->HashStringAsHex(password)){
				success = true;
				korisnik::ulogiran = true;
				korisnik::ime = username;

				break;

			}
		}
		T_User->Next();
	}

	delete sha1;
	return success;

}

bool userExists(TADOTable* T_User, UnicodeString username){


	bool postoji = false;



	T_User->First();

	for (int i = 0; i < T_User->RecordCount; i++) {
		if(T_User->FieldByName("Username")->AsString == username){

			postoji = true;
			break;
		}
		T_User->Next();
	}

    return postoji;
}

void addUser(TADOTable* T_User, UnicodeString username, UnicodeString password){

	TIdHashSHA1* sha1 = new TIdHashSHA1;
	T_User->Append();
	T_User->FieldByName("ID")->AsInteger = T_User->RecordCount + 1;
	T_User->FieldByName("Username")->AsString = username;
	T_User->FieldByName("Password")->AsString = sha1->HashStringAsHex(password);
	T_User->Post();
	ShowMessage("You registered succesfully, please login to play");
	delete sha1;



}

void setPass(TADOTable* T_User, UnicodeString username, UnicodeString password){

	for(int i = 0; i < T_User->RecordCount; i++) {

		if(T_User->FieldByName("Username")->AsString == username){

				TIdHashSHA1* sha1 = new TIdHashSHA1;
				T_User->Edit();
				T_User->FieldByName("Password")->AsString = sha1->HashStringAsHex(password);
				T_User->Post();
				ShowMessage("You succesfully changed your password");




				delete sha1;
                break;
		}
			T_User->Next();
	}


}

