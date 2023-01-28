#include<iostream>
using namespace std;
class Add1 {
	public:
	int a = 54;
	int get_a(){
		return a;
	}
};
class Add2 {
	public:
	int b = 44;
	int get_b(){
		return b;
	}
};
class Add3 : public Add1, Add2 {
	public:
	void display() {
		cout<<get_a()<<endl;
		cout<<get_b();
	}
};
int main() {
	Add3 obj;
	obj.display();
	return 0;
}