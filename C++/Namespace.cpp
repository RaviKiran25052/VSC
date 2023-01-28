#include <iostream>
using namespace std;

namespace cse {
      int rno = 5;
}
namespace it {
      double rno = 3;
}
int main () {
      cout << cse::rno << endl;
      cout << it::rno << endl;
      return 0;
}