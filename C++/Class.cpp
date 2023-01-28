#include <bits/stdc++.h>
using namespace std;
class Name {
   public:
   string name;
   void printname() {
      cout << "Name is : " << name;
   }
};
int main() {
   Name obj;
   obj.name = "Ravi";
   obj.printname();
   return 0;
}