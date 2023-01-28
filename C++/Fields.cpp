#include <iostream>
using namespace std;
class CSE {
      public:
            int id;//data member (also instance variable)
            string name;//data member(also instance variable)
};
int main() {
      CSE s1; //creating an object of Student
      s1.id = 554;
      s1.name = "Ravi Kiran";
      cout<<s1.id<<endl;
      cout<<s1.name<<endl;
      return 0;
}