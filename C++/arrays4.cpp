#include <iostream>
using namespace std;
int main() {
	int n, s = 0, i = 0;
	cout << "Enter the size of the array : ";
	cin >> n;
	int arr[n];
	cout << "Enter the elements in the array : ";
	while(i < n) {
		cin >> arr[i];
		s += arr[i];
		i++;
	}
	i=0;
	cout << "The sum of ";
	while(i < n) {
		printf("%d ",arr[i]);
		i++;
	}
	cout << " is : " << s;
	return 0;
}