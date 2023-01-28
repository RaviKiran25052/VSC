#include<iostream>
using namespace std;
class GfG {
	public:
	static void printMsg() {
		cout<<"Welcome to GfG!";
	}
};
int main() {
	GfG::printMsg();
	return 0;
}