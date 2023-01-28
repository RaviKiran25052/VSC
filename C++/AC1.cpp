#include<iostream>
using namespace std;
class shape {
	public:
	virtual void draw() = 0;
};
class Rec : public shape {
	void draw() {
		cout<<"drawing Rectangle\n";
	}
};
class Circle : public shape {
	void draw() {
		cout<<"drawing Circle\n";
	}
};
int main() {
	Rec r;
	Circle c;
	shape *p1 = &r,*p2 = &c;
	p1->draw();
	p2->draw();
	return 0;
}