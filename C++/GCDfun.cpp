#include <iostream>
using namespace std;
int GCD(int a,int b) {
	if ( b > a) {   
   	int temp = b;
   	b = a;
   	a = temp;
	}
	if (b == 0)
	return a;
	else
	return GCD(b, a % b);
}
int main() {
  	int n1, n2, gcd;
  	cout << "Enter two numbers: ";
  	cin >> n1 >> n2;
	gcd = GCD(n1,n2);
	cout << "The GCD of " << n1 << " and " << n2 << " is " << gcd;
	return 0;
}