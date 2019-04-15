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
	Node* p = head;
	Node* tmp;
	while(p){
		tmp = p->next;
		delete p;
		p = tmp;
	}
	head = nullptr;
	tail = nullptr;

}
LinkedList::LinkedList(const LinkedList& source)
//	:head(nullptr), tail(nullptr)
{
	/*
	 * Default copy constructor executes this code
	 * Its called a shallow copy because it only copies the pointers and not all the nodes. So the two linked lists (source and *this) now share the same set of nodes which leads to incorrect behavior
	head = source.head;
	tail = source.tail;
	*/
	Node* p = source.head;
	while(p){
		this->append(p->data);
		p = p->next;
	}



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

