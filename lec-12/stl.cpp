#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <set>
using namespace std;

int main(){
	array<string, 6> arr = {"India", "US", "Burma", "Finland", "Greenland", "China"};
	vector<string> vv;
	list<string> ll;
	set<string> bst;
	cout<<" Elements in the array" <<endl;
	for(int i =0; i< 6; i++){
		vv.push_back(arr[i]);
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(auto item: vv){
		ll.push_back(item);
	}	
	for(auto item: ll){
		bst.insert(item);
	}
	cout<<" Inorder traversal of the bst" <<endl;
	for(auto item: bst){
		cout<<item<<" ";
	}
	cout<<endl;


	return 0;
}
