//---------------------------------------------------------------------------

#ifndef operacijeUserH
#define operacijeUserH
#include <vcl.h>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>


using namespace std;
//---------------------------------------------------------------------------
#endif

bool login(TADOTable* T_User, UnicodeString username, UnicodeString password);
bool userExists(TADOTable* T_User, UnicodeString username);
void addUser(TADOTable* T_User, UnicodeString username, UnicodeString password);
void setPass(TADOTable* T_User, UnicodeString username, UnicodeString password);


