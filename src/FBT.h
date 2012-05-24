/*
 * FBT.h
 *
 *  Created on: 24-05-2012
 *      Author: Franco1
 */

#ifndef FBT_H_
#define FBT_H_
#include "Node.h"

namespace std {

class FBT {
public:
	FBT();
	virtual ~FBT();
	void clearFbt(int nivel); //Hasta que nivel se limpia
	int ball(int nivel); //Hasta que nivel recorre la bola
	int process(int nivel,int repeticiones); //Hasta que nivel se recorre y cuantas repeticiones tendra la bola

private:
	Node* root;
};

} /* namespace std */
#endif /* FBT_H_ */
