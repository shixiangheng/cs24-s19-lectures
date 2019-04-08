#include <iostream>
using namespace std;

// ax^2 + b*x+ c
class Quadratic{
public:
	Quadratic(double aa =0, double bb =0, 
	         double cc =0); //default constructor
	Quadratic(const Quadratic& source);
	~Quadratic(); // destructor
	double evaluate(double x);

private:
	 double a;
	 double b;
	 double c;
};

Quadratic::Quadratic(double aa, double bb ,
 double cc):a(aa), b(bb), c(cc) { 
 //default constructor

}

Quadratic::Quadratic(const Quadratic&
	                 source){
	a = source.a;
	b = source.b;
	c = source.c;
}

Quadratic::~Quadratic(){

}

double Quadratic::evaluate(double x){
	return a*x*x + b*x + c;
}

int main(){
	Quadratic q;
	Quadratic* p = new Quadratic;
	Quadratic* z = new Quadratic(1, 5, 10);
	Quadratic x(*z); // Copy constructor
	Quadratic y = *z; // Copy constructor

	return 0;
}









