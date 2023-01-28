#include<iostream>
using namespace std;
int main() {
      int n,s=0,v;
      cout<<"Enter the n value : ";
      cin>>n;
      for(int i=0;i<n;i++) {
            cin>>v;
            s+=v;
      }
      cout<<"Ths Sum of "<<n<<" numbers is "<<s<<endl;
      return 0;
}