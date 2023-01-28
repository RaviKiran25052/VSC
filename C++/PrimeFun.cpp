#include<iostream>
using namespace std;
void Prime(int n) {
	int count = 0,i;
	for(i=2; i<n; i++) {
        if (n % i == 0)
            count ++;
	}
   if(count != 0)
      printf("%d is a COMPOSITE number\n",n);
   else
      printf("%d is a PRIME number\n",n);
}
int main() {
	int n;
	cout << "Enter the number : ";
	cin >> n;
	Prime(n);
}