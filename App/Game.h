//---------------------------------------------------------------------------

#ifndef GameH
#define GameH
#include <vcl.h>
#include "pitanja.h"
#include "Igra.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//---------------------------------------------------------------------------
#endif


class questions{
public:

	vector<int> question_nos;
	int counter;

	static int answer;
	static int right_answer;


	void create_questions(int n);


};
int questions::answer = 0;
int questions::right_answer = 0;

void game_start(questions q, _di_IXMLpitanjaType pitanja);

