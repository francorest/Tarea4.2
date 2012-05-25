/*
 * FBT.cpp
 *
 *  Created on: 24-05-2012
 *      Author: Franco1
 */

#include "FBT.h"

namespace std {

FBT::FBT() {
	nodes = new bool[1048575];
	niveles = new int[20];
	niveles[0] = 1;
	niveles[1] = 3;
	niveles[2] = 7;
	niveles[3] = 15;
	niveles[4] = 31;
	niveles[5] = 63;
	niveles[6] = 127;
	niveles[7] = 255;
	niveles[8] = 511;
	niveles[9] = 1023;
	niveles[10] = 2047;
	niveles[11] = 4095;
	niveles[12] = 8191;
	niveles[13] = 16383;
	niveles[14] = 32767;
	niveles[15] = 65535;
	niveles[16] = 131071;
	niveles[17] = 262143;
	niveles[18] = 524287;
	niveles[19] = 1048575;


}

FBT::~FBT() {
	delete[] nodes;
}

void FBT::clearFbt(int nivel){
	for (int i = 0; i<niveles[nivel-1]; i++) {
		nodes[i] = 0;
	}
}

int FBT::ball(int nivel){
	int n = 1;
	
	
	for (int i = 0; i<nivel-1; i++) {
		nodes[n-1]=!nodes[n-1];
		if (!nodes[n-1]) {
			n=(n*2)+1;
		}else {
			n=n*2;
		}
	}
	
	return n;
	
}
int FBT::process(int nivel, int repeticiones){

	clearFbt(nivel);
	int retorno = 0;
	for(int i = 0;i < repeticiones;i++)
		retorno = ball(nivel);

	return retorno;
}

void FBT::printTree(){

}

	
	
	
	
Lista<string>* FBT::split(string lin,char ch){

	Lista<string>* auxList = new Lista<string>();

	for(int i = 0; i < (int)(lin.size());++i){

		if(lin[i] == ch){

			auxList->add(lin.substr(0,i));
			lin = lin.substr(i+1,lin.size()-i);
			i=-1;
		}
		else if(i == (lin.size()-1) && lin[i] != ch){
			auxList->add(lin.substr(0,i+1));
		}

	}

	return auxList;
}

} /* namespace std */
