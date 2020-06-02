//---------------------------------------------------------------------------

#ifndef InfoH
#define InfoH

#include <vcl.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

#include "Potjera.h"
using namespace std;

//---------------------------------------------------------------------------
#endif

class korisnik{
public:
	static UnicodeString ime;
	static bool ulogiran;
	static int score;
	static int pozicija;
	static UnicodeString izabrana_ponuda;

};
UnicodeString korisnik::ime = "0";
UnicodeString korisnik::izabrana_ponuda = "0";
bool korisnik::ulogiran = false;
int korisnik::score = 0;
int korisnik::pozicija = 0;

class lovac{
public:

	static UnicodeString ime;
	static int odgovor;
	static int vrijeme_za_odgovor;
	static int tocnost;
	static int pozicija_l;
	static float koef;


};

UnicodeString lovac::ime = "0";
int lovac::odgovor = 0;
int lovac::vrijeme_za_odgovor = 0;
int lovac::tocnost = 0;
int lovac::pozicija_l = 0;
float lovac::koef = 0;



class pitanje_{
public:

	static UnicodeString pitanje;
	static vector<UnicodeString> odgovori;


};
UnicodeString pitanje_::pitanje = "0";
vector<UnicodeString> pitanje_::odgovori = {};

