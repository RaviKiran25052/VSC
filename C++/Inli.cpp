#include<iostream>
using namespace std;
inline int Max(int x,int y) {
	return ((x>y)?x:y);
}
int main(){
	cout<<Max(2,5);
	return 0;
}