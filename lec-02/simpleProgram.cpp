//Diba Mirza
#include <iostream>

using namespace std;
//Abstract data type

class DayOfYear{
	//member functions
	public: 
		// constructor is called when new objects are declared
		// it is used to initialize member variables
		// default contructor with no parameters
		// notice there is no return value
	//	DayOfYear();
		DayOfYear(int mm=1, int dd=1);
		void setDate(int month , int day);
		void input();

		// Getter functions, accessor functions
		// Only access information about member variables
		// Must not modify the member variables
		int getMonth() const;
		int getDay() const;
	private:
		//member variables
		int month;
		int day;
};
// by default all the member functions and member variables
// of a class are private: In this case only the member functions can modify/access
// the member variables or call other member functions.
// for struct default is : public
// for classes default is : private

//What happens when I compile this code:
// A. Compiler error
// B. Linker error
// C. No error


DayOfYear::DayOfYear(){
	month = 1;
	day = 1;
}
DayOfYear::DayOfYear(int mm, int dd){
	month = mm;
	day = dd;
}

int DayOfYear::getDay() const{
	return day;
}

void DayOfYear::setDate(int mm , int dd){
	month = mm;
	day = dd;

}
void DayOfYear::input(){
	cin>> month>>day;
}
int DayOfYear::getMonth() const{
	return month;
}

int main(){
	DayOfYear today(9, 8);
	cout << today.getDay() << today.getMonth();
	DayOfYear birthday;
	today.setDate(4, 1);
	//cout << today.month<<endl;
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
