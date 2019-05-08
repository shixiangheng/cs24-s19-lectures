// testlinkedlist.h
// Diba Mirza
// Date Created : 04/10/2019
// Last modified: 04/10/2019
// Implement a double linked list

#include "linkedlist.h"
#include "testlinkedlist.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
	runAll();
	LinkedList ll;
	ll.append(1);
	ll.append(2);
	ll.print();
	cout<<ll;// operator<<(cout, ll);
	return 0;
}

void runAll(){
	test_append();
	test_equal();
	test_copy_constructor();
//	test_copy_assignment();
}

void test_copy_assignment(){
	LinkedList l1;
	l1.append(1);
	LinkedList l2;
	l2.append(3);
	l2 = l1;
}
void test_append(){
	START_TEST("test_append");
	test_append_0();
	test_append_1();
	END_TEST("test_append");

}

void test_equal(){
	START_TEST("test_equal");
	test_equal_0();
	//test_equal_1();
	END_TEST("test_equal");

}

void test_copy_constructor(){
	START_TEST("test_copy_constructor");
	test_copy_constructor_0();
	END_TEST("test_copy_constructor");

}
void test_copy_constructor_0(){
	string testname = "case 0:copy single node list [1]";
	LinkedList l1;
	l1.append(1);
	LinkedList l2(l1);
	TESTEQ(l1, l2, testname);
}

void test_append_0(){ // A test case for append
	string testname = "case 0: append [1] to emptylist";
	LinkedList lst;
	lst.append(1);
	vector<int> vexp = {1};
	vector<int> vact = lst.vectorize();
	if (vexp!= vact){
		cout <<" FAILED: "<<testname<<endl;
	}else{
		cout <<" PASSED: "<<testname<<endl;
	}
}

void test_append_1(){ 
	// Tests cases should be independent,
    // small, fast, orthogonal (test for different cases)

}
void test_equal_0(){ 
	string testname = "case 0: [1], [1]";
	LinkedList l1, l2;
	l1.append(1);
	l2.append(1);
	TESTEQ(l1, l2, testname);
}





