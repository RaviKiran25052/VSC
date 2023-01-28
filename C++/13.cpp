#include<iostream>
using namespace std;
namespace First {
	void sayHello() {
		cout << "Hello Earth-1..!\n";
	}
}
namespace Second {
	void sayHello() {
		cout << "Hello Earth-2..!\n";
	}
}
int main() {
	First::sayHello();
	Second::sayHello();
	return 0;
}