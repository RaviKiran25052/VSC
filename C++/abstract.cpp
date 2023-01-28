#include <iostream>
using namespace std;
class Rectangle {
      public:
            int length;
            int breadth;
      public:
            void setLength(int len) {
                  length = len;
            }
            void setBreadth(int brth) {
                  breadth = brth;
            }
            int getLength() {
                  return length;
            }
            int getBreadth() {
                  return breadth;
            }
            int getArea() {
                  return length * breadth;
            }
};
int main() {
      Rectangle rectangle1;
      int l,b;
      cout << "\nEnter the length : ";
      cin >> l;
      cout << "Enter the breadth : ";
      cin >> b;
      rectangle1.setLength(l);
      rectangle1.setBreadth(b);
      cout << "Length = " << rectangle1.getLength() << endl;
      cout << "Breadth = " << rectangle1.getBreadth() << endl;
      cout << "Area = " << rectangle1.getArea() << endl;
      cerr << "The public variables Length and Breadth are : " << rectangle1.length << ", " << rectangle1.breadth << endl;
      return 0;
}