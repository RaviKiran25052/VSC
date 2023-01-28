#include <iostream>
using namespace std;
void sum(int arr1[], int arr2[]) {
	int temp[5];
	for(int i=0; i<5; i++){
		temp[i] = arr1[i]+arr2[i];
		cout<<temp[i]<<endl;
	}
}
int main() {
	int a[5] = {1, 4, 3, 4 ,1};
	int b[5] = {1, 4, 3, 4, 1};
	sum(a, b);
	return 0;
}