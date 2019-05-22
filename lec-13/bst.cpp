// BST.cpp
// Implements class BST
// YOUR NAME(S), DATE

#include <iostream>
using std::cout;

// constructor sets up empty tree

template< class T>
BST<T>::BST() : root(0) { }

// destructor deletes all nodes

template< class T>
BST<T>::~BST() {
    clear(root);
}

// recursive helper for destructor

template< class T>
void BST<T>::clear(Node *n) {
    if (n) {
		clear(n->left);
		clear(n->right);
		delete n;
    }
}

// insert value in tree; return false if duplicate

template< class T>
bool BST<T>::insert(T value) {
    // handle special case of empty tree first
    if (!root) {
	root = new Node(value);
	return true;
    }
    // otherwise use recursive helper
    return insert(value, root);
}

// recursive helper for insert (assumes n is never 0)

template< class T>
bool BST<T>::insert(T value, Node *n) {
    if (value == n->info)
	return false;
    if (value < n->info) {
	if (n->left)
	    return insert(value, n->left);
	else {
	    n->left = new Node(value);
	    n->left->parent = n;
	    return true;
	}
    }
    else {
	if (n->right)
	    return insert(value, n->right);
	else {
	    n->right = new Node(value);
	    n->right->parent = n;
	    return true;
	}
    }
}

// print tree data pre-order

template< class T>
void BST<T>::printPreOrder() const {
    printPreOrder(root);
}

// recursive helper for printPreOrder()

template< class T>
void BST<T>::printPreOrder(Node *n) const {
    if (n) {
	cout << n->info << " ";
	printPreOrder(n->left);
	printPreOrder(n->right);
    }
}


template< class T>
BST<T>::Node* BST<T>::getNodeFor(int value, Node* n) const{
    return NULL; // REPLACE THIS NON-SOLUTION
} 

// returns true if value is in the tree; false if not

template< class T>
bool BST<T>::contains(T value) const {
    return true; // REPLACE THIS NON-SOLUTION
}
