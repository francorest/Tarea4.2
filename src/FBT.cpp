/*
 * FBT.cpp
 *
 *  Created on: 24-05-2012
 *      Author: Franco1
 */

#include "FBT.h"

namespace std {

FBT::FBT() {
	root = new Node(1,1);
	createTree(root,2,2);

}

FBT::~FBT() {
	delete root;
}

void FBT::createTree(Node* nodo, int nivel, int index){

	Node* left = new Node(index,nivel);
	Node* right = new Node(index+1,nivel);
	nodo->setLeftNode(left);
	nodo->setRightNode(right);
	if(nivel < 20){
		++nivel;
		createTree(right,nivel,(index+1)*2);
		createTree(left,nivel,index*2);

	}
}


void FBT::clearFbt(int nivel){
	root->clearChilds(nivel);
}

int FBT::ball(int nivel){
	return root->ball(nivel);
}
int FBT::process(int nivel, int repeticiones){

	clearFbt(nivel);
	int retorno = 0;
	for(int i = 0;i < repeticiones;i++)
		retorno = ball(nivel);

	return retorno;
}

void FBT::printTree(){
	root->printChilds();
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
