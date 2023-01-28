#include<iostream>
using namespace std;
int main() {
      int n,p=1,i;
      cout<<"Enter the n value : ";
      cin>>n;
      for(i=1;i<=n;i++)
            p*=i;
      cout<<"The factorial of "<<n<<" is : "<<p<<endl;
      return 0;
}