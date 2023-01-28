#include<iostream>  
using namespace std;  
class Base {
	public:  
		Base() {  
			cout << "\nConstructor Base class";
		}  
		virtual ~Base() {  
			cout << "\nDestructor Base class";
		}
};
class Derived: public Base {
   public:
   Derived() {
   	cout << "\nConstructor Derived class" ;
	}
 	~Derived() {  
   	cout << "\nDestructor Derived class";
	}         
};  
int main() {
	Base *p = new Derived;
	delete p;
}