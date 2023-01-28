#include<iostream>
using namespace std;
int main(){
   int a, i, n;
   cout << "Enter table format : ";
   cin >> a;
   cout << "Enter end of table : ";
	cin >> n;
   for(i = 0; i <= n; i++){
      cout << a << " X " << i << " = " << a*i << endl;
   }
}