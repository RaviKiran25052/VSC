#include<iostream>
using namespace std;
class PrintData {
	public:
	void print(int a) {
		cout << a << " is a Integer.\n";
	}
	void print(string a) {
		cout << a << " is a String.\n";
	}
	void print(double a) {
		cout << a << " is a Float.\n";
	}
};
int main() {
	PrintData d;
	d.print(5);
	d.print("ravi");
	d.print(5.54);
	return 0;
}