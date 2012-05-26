/*
 * FBT.h
 *
 *  Created on: 24-05-2012
 *      Author: Franco1
 */

#ifndef FBT_H_
#define FBT_H_

#include <math.h>

namespace std {

class FBT {
public:
	int process(int nivel,int repeticiones){
		int* binario = new int[nivel-1];
		repeticiones--;
		decToBin(repeticiones, binario,nivel);
		return (pow(2, nivel-1) + binToDec(binario,nivel));
		
	}
	
	void decToBin(int number, int* bin, int nivel){
		int potencia = pow(2, nivel - 2);
		int indice = 0;
		while (indice<nivel-1) {
			if (number>=potencia) {
				bin[indice] = 1;
				number-=potencia;
			}else{
				bin[indice]=0;
			}
				
				potencia=potencia/2;
				indice ++;
		}
	}
	
	int binToDec(int* bin, int nivel){
		int potencia, resultado;
		potencia = 1;
		resultado = 0;
		for (int i = 0; i<nivel -1; i++) {
			resultado += bin[i]*potencia;
			potencia = potencia*2;
		}
		return resultado;
	}


};

} /* namespace std */
#endif /* FBT_H_ */
