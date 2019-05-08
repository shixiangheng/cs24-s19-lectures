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

class BST{
public:
	BST():root(nullptr){}
	~BST();
	BST(const BST& source);
	void insert(int item);
	void remove(int item);
	bool search(int item);
	int min();
	int max();
	void printInorder();
	void printPreorder();
	void printPostorder();
	int sum();
    void clear();
	vector<int> vectorize();
	bool operator==(const BST& other);
	void operator=(const BST& other);
private:
	struct Node{
		Node(int item):data(item), left(nullptr),right(nullptr),
		parent(nullptr){}
		int data;
		Node* left;
		Node* right;
		Node* parent;
	};
	Node* root;
	//Recursive helper functions
	int sum(Node*);
    void clearHelper(Node*);
	void printHelper(Node*);
	bool searchHelper(int item, Node* r);
};
void operator<<(ostream& out, BST& ll);
#endif
