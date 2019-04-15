// testlinkedlist.h
// Diba Mirza
// Date Created : 04/10/2019
// Last modified: 04/10/2019
// Implement a double linked list

#ifndef TEST_LINKED_LIST_H
#define TEST_LINKED_LIST_H
#include <vector>
#include <iostream>
#include "linkedlist.h"
#include <string>

using namespace std;
void runAll();
void test_constructor();
void test_copy_constructor();
void test_append();
void test_equal();
/*
void test_destructor();
void test_remove();
void test_search();
void test_min();
void test_max();
void test_vectorize(); 
*/
void test_append_0(); // A test case for append
void test_append_1(); // Tests cases should be independent,
					  // small, fast, orthogonal
void test_equal_0();
void test_copy_constructor_0();

void START_TEST(string testname){
	cout<<"Start "<<testname<<endl;
}

void END_TEST(string testname) {
	cout<<"End "<<testname<<endl<<endl;
}

void TESTEQ(LinkedList& l1, LinkedList& l2, string testname){
	if(l1 == l2){ //compiler reads this as l1.operator==(l2);
		cout<<" PASSED "<<testname<<endl;
	}else{
		cout<<" FAILED "<<testname<<endl;
	}
}

#endif
