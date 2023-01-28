#include <iostream>
using namespace std;
int main() {
	int arr[2][3][2] = {
	{ {1,4}, {3,1}, {4,3} },
	{ {1,4}, {3,1}, {4,3} }
	};
	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 3; y++) {
			for (int z = 0; z < 2; z++) {
				cout<<arr[x][y][z]<<" ";
			}
		}
	}
	return 0;
}