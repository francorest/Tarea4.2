//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "FBT.h"

using namespace std;

int main() {


	string numberOfTest;
	getline(cin, numberOfTest);
	int numberOfT = atoi(numberOfTest.c_str());
	string* listOfTest = new string[numberOfT];
	string input_line = "";

	for(int i = 0; i < numberOfT;i++){
		getline(cin, input_line);
		listOfTest[i] = input_line;
	}
	getline(cin, input_line);

	FBT* fbt = new FBT();

	
	for(int i = 0; i < numberOfT;i++){
		Lista<string>* lista = fbt->split(listOfTest[i],' ');
		int nivel = atoi(lista->get(0).c_str());
		int repeticiones =atoi(lista->get(1).c_str());
		cout<<fbt->process(nivel,repeticiones)<<endl;
	}

	/*int test = fbt->process(4,2);
	int test2 = fbt->process(3,4);
	int test3= fbt->process(10,1);
	int test4 = fbt->process(2,2);
	int test5 = fbt->process(8,12800);

	cout << test << endl;
	cout << test2 << endl;
	cout << test3 << endl;
	cout << test4 << endl;
	cout << test5 << endl;*/
	return 0;
}
