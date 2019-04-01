//Diba Mirza
#include <iostream>

using namespace std;

class Date{
public:
	void setDate(int mm , int dd);
	void input();
	int getMonth();
	int getDay();
	//member variables
	int month;
	int day;
};


int main(){
	Date today;
	Date birthday;
	today.setDate(4, 1);
	cout<<"Enter your birthday: ";
	birthday.input();
	//cin>>birthday.month>>birthday.day;
	if(today.getMonth() == birthday.getMonth() 
		&& today.getDay() == birthday.getDay())
		cout<<"Happy Birthday!"<<endl;
	else
		cout<<"Oh well!"<<endl;

	return 0;
}
