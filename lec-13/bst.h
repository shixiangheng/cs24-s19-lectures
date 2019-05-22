// bst.h


#ifndef BST_H
#define BST_H

#include <iostream>

using namespace std;

template< class T>
class BST {

 public:
    BST();                   // constructor
    ~BST();                  // destructor
    bool insert(T value);     // insert value; return false if duplicate
    bool contains(T value) const;  // true if value is in tree
    void printPreOrder() const;
 private:

    struct Node {
	T info;
	Node *left, *right, * parent;
	// useful constructor:
    Node(T v=0) : info(v), left(0), right(0), parent(0) { }
    };

    // just one instance variable (pointer to root node):
    Node* root;

    // recursive utility functions for use by public methods above
    Node* getNodeFor(T value, Node* n) const; // IMPLEMENT THIS FIRST: returns the node for a given value or NULL if none exists
    void printPreOrder(Node *n) const;
    void clear(Node *n); // for destructor
    bool insert(T value, Node *n); // note overloading names for simplicity
    
};
template <class T>
BST<T> operator+(const BST<T>& b1, const BST<T>& b2){
    BST<T> b;
    return b;
}
#include "bst.cpp"

#endif
