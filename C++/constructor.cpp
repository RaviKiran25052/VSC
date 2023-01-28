#include <iostream>
using namespace std;
class Employee {
	public:
	String Employee() {
		cout<<"By Default Constructor Invoked"<<endl;
		return "Rakesh";
	}
};
int main() {
	Employee e1;
	Employee e2;
	return 0;
}