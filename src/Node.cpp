/*
 * Node.cpp
 *
 *  Created on: 24-05-2012
 *      Author: Franco1
 */

#include "Node.h"

namespace std {

Node::Node(int ind, int niv) {
	index = new int(ind);
	nivel = new int(niv);
	value = new bool(false);
	left = 0;
	right = 0;
}

Node::~Node() {
	delete index;
	delete nivel;
	delete value;
	delete left;
	delete right;
}

void Node::setLeftNode(Node* l){
	left = l;
}
void Node::setRightNode(Node* r){
	right = r;
}
Node* Node::getRightNode(){
	return right;
}
Node* Node::getLeftNode(){
	return left;
}
int Node::getIndex(){
	return *index;
}
bool Node::getValue(){
	return *value;
}
int Node::getNivel(){
	return *nivel;
}
void Node::invertirValue(){
	if(*value)
		(*value) = false;
	else
		(*value) = true;
}

void Node::setValue(bool val){
	(*value) = val;
}

void Node::clearChilds(int niv){
		setValue(false);
		if(*nivel < niv){
			right->clearChilds(niv);
			left->clearChilds(niv);
		}
}

int Node::ball(int niv){

	if(*nivel == niv)
		return *index;

	else if(!*value){
		invertirValue();
		return left->ball(niv);
	}

	else{
		invertirValue();
		return right->ball(niv);
	}
}

void Node::printChilds(){
	cout<<*index<<endl;
	if(right != 0)
		right->printChilds();
	if(left != 0)
		left ->printChilds();

}


} /* namespace std */
