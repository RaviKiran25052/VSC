#include<iostream>
using namespace std;
int main() {
	int n,i,count = 0;
	cout << "Enter the number : ";
	cin >> n;
	for(i=2; i<n; i++) {
        if (n % i == 0)
            count ++;
	}
	cout << n <<" is a ";
   if(count != 0)
      cout << "COMPOSITE number";
   else
      cout << "PRIME number";
	return 0;
}