// linkedlist.cpp
// Diba Mirza
// Date Created : 04/10/2019
// Last modified: 04/10/2019
// Implement a double linked list


#include <vector>
#include <iostream>
#include "linkedlist.h"
using namespace std;

LinkedList::~LinkedList(){

}

void LinkedList::append(int item){
	Node* p = new Node(item);
	if(!head){
		head = p;
		tail = p;
	}
}
void LinkedList::remove(int item){

}

bool LinkedList::search(int item){
	return false;
}

int LinkedList::min(){
	return 42;
}

int LinkedList::max(){
	return 42;
}

void LinkedList::print(){

}

bool LinkedList::operator==(const LinkedList& other){

	Node* p1 = head;
	Node* p2 = other.head;

	while(p1 && p2){
		if(p1->data != p2->data)
			return false;
		p1 = p1->next;
		p2 = p2->next;
	}
	return p1 == nullptr && p2 == nullptr;
}


vector<int> LinkedList::vectorize(){
	vector<int> v; // v is a dynamic array, initially empty
	Node* p = head;
	while(p){
		v.push_back(p->data); //append the value p->data to v
		p = p->next;
	}
	return v;
}

