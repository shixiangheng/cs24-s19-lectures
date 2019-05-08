// linkedlist.cpp
// Diba Mirza
// Date Created : 04/10/2019
// Last modified: 04/10/2019
// Implement a double linked list


#include <vector>
#include <iostream>
#include "linkedlist.h"
using namespace std;

bool BST::searchHelper(int item, Node* r){
	if(!r)
		return false;
	if(r->data == item)
		return true;
	if(item < r->data)
		return searchHelper(item, r->left);
	return searchHelper(item, r->right);

}

int BST::sum(){
	return sum(head);
}

int BST::sum(Node* curr){
	// base case, simplest case you don't need recursion
	if(curr == nullptr)
		return 0;
    return curr->data +  sum(curr->next);
}

BST::~BST(){
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

void operator<<(ostream& out, BST& ll){
}
void BST::operator=(const BST& other){
   //default implementation
   head = other.head;
   tail = other.tail;
    /*head = nullptr;
    tail = nullptr;
	Node* p = other.head;
	while(p){
		this->append(p->data);
		p = p->next;
	}*/
}
BST::BST(const BST& source)
	:head(nullptr), tail(nullptr)
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

void BST::append(int item){
	Node* p = new Node(item);
	if(!head){
		head = p;
		tail = p;
	}
}
void BST::remove(int item){

}

bool BST::search(int item){
	return false;
}

int BST::min(){
	return 42;
}

int BST::max(){
	return 42;
}

void BST::printHelper(Node* curr){// should be private
	if(!curr)
		return;
	cout<<curr->data;
	printHelper(curr->next);

}
void BST::clearHelper(Node* p){
	if(!p)
		return;
	clearHelper(p->next);
	delete p;
}
//public
void BST::clear(){
	clearHelper(head);
	head = nullptr;
	tail = nullptr;
}
void BST::print(){
	printHelper(head);
}

bool BST::operator==(const BST& other){

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


vector<int> BST::vectorize(){
	vector<int> v; // v is a dynamic array, initially empty
	Node* p = head;
	while(p){
		v.push_back(p->data); //append the value p->data to v
		p = p->next;
	}
	return v;
}

