// testbst.cpp
// Tests intbst.cpp for CS 24 lab

#include "bst.h"

#include <iostream>
#include <vector>
using namespace std;

template <class T1, class T2>
void insertIntoBST(T1& b, const T2& v)
{
  // insert data to bst1
    for(auto item: v){
        b.insert(item);
    }

}

int main() {
    vector<int> v1{64, 128, 8, 512, 256, 32, 16, 4};
    BST<int> bst1;
    BST<int> bst3;
    BST<int> bst4;
    bst4 = bst1 + bst3;
      
    vector<string> v2{"banana", "apple", "orange"};
    BST<string> bst2;
    insertIntoBST(bst1, v1);
    insertIntoBST(bst2, v2);

    cout << "  pre-order: ";
    bst1.printPreOrder();
    cout << endl;

    cout << "  pre-order: ";
    bst2.printPreOrder();
    cout << endl;
  
    return 0;
}

