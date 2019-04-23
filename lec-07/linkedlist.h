// linkedlist.h
// Diba Mirza
// Date Created : 04/10/2019
// Last modified: 04/10/2019
// Implement a double linked list

#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <vector>
#include <iostream>
using namespace std;

class LinkedList{
public:
	LinkedList():head(nullptr), tail(nullptr){}
	~LinkedList();
	LinkedList(const LinkedList& source);
	void append(int item);
	void remove(int item);
	bool search(int item);
	int min();
	int max();
	void print();
	int sum();
    void clear();
	vector<int> vectorize();
	bool operator==(const LinkedList& other);
	void operator=(const LinkedList& other);
private:
	struct Node{
		Node(int item):data(item), prev(nullptr),next(nullptr){}
		int data;
		Node* prev;
		Node* next;
	};
	Node* head;
	Node* tail;
	//Recursive helper functions
	int sum(Node*);
    void clearHelper(Node*);
	void printHelper(Node*);
};
void operator<<(ostream& out, LinkedList& ll);
#endif
