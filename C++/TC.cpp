#include <iostream>
using namespace std;
template <class T>
class Calculator {
   private:
    T num1, num2;
   public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }
    T add() { return num1 + num2; }
    void displayResult() {
        cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
    }
};

int main() {
    Calculator <int> intCalc(2, 1);
    Calculator <float> floatCalc(2.4, 1.2);

    cout << "Int results:" << endl;
    intCalc.displayResult();

    cout << endl
         << "Float results:" << endl;
    floatCalc.displayResult();

    return 0;
}