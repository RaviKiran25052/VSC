#include<iostream>
using namespace std;
int main() {
      int n,a=0,b=1,v;
      cout<<"Enter the n value : ";
      cin>>n;
      cout<<"The fibonacci series is : 0 ";
      while(b<=n) {
            cout<<b<<" ";
            v=b;
            b=a+b;
            a=v;
      }
      cout<<endl;
      return 0;
}