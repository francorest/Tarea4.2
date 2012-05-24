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

}

int FBT::ball(int nivel){
	return 0;
}
int FBT::process(int nivel, int repeticiones){
	return 0;
}

void FBT::printTree(){
	root->printChilds();
}

} /* namespace std */
