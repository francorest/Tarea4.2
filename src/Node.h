/*
 * Node.h
 *
 *  Created on: 24-05-2012
 *      Author: Franco1
 */

#ifndef NODE_H_
#define NODE_H_

namespace std {

class Node {
public:
	Node(int ind, int niv);
	virtual ~Node();
	void setLeftNode(Node* l);
	void setRightNode(Node* r);
	Node* getLeftNode();
	Node* getRightNode();
	int getIndex();
	bool getValue();
	int getNivel();
	void invertirValue();
private:
	Node* left;
	Node* right;
	int* index;
	bool* value;
	int* nivel;
};

} /* namespace std */
#endif /* NODE_H_ */