/*
 * List.h
 *
 *  Created on: 20-03-2012
 *      Author: Franco1
 */
using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#ifndef LIST_H_
#define LIST_H_



template <typename T>
class Lista {

private:
	T* info;
	int* size;
	int* cantElement;

public:
	Lista();
	void add(T val);
	T get(int pos); //por ahora
	void growIfNeed(){};
	bool arrayFull();
	int getSize();
	int getCantElement();
	void remove(int pos);
	void setMember(int pos, T valor);
};

template <typename T>
void Lista<T>::setMember(int pos,T valor){
	info[pos] = valor;
}

template <typename T>
Lista<T>::Lista(){

	cantElement = new int(0);
	size = new int(5);
	info = new T[(*size)];

}

template <typename T>
void Lista<T>::remove(int pos){

		if(pos <= (*cantElement)){

			T* newData = new T[(*size)];
			for(int i = 0; i < pos; ++i){
			newData[i] = info[i];
			}
			for(int i = pos+1;i < (*cantElement);++i){
				newData[i-1] = info[i];
			}
			delete[] info;
			info = newData;
			--(*cantElement);
		}
}

template <typename T>
int Lista<T>::getSize(){
	return (*size);
}
template <typename T>
int Lista<T>::getCantElement(){
	return (*cantElement);
}


template <typename T>
bool Lista<T>::arrayFull(){

	if((*size) == (*cantElement))
		return true;
	else
		return false;

	return true;
}


template <typename T>
void Lista<T>::add(T val){

	if(arrayFull()){

		int newLenght = (*size)*2;
		T* newData = new T[newLenght];
		for(int i = 0; i < (*cantElement); ++i){
		newData[i] = info[i];
		}
		delete[] info;

		info = newData;
		(*size) = newLenght;
		info[(*cantElement)] = val;
		++(*cantElement);
		}
	else
	{
		info[(*cantElement)] = val;
		++(*cantElement);

	}

}
template <typename T>
T Lista<T>::get(int a){
	return info[a];
}


 /* namespace std */
#endif /* LIST_H_ */
