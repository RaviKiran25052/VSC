#include <iostream>
using namespace std;

struct Struct {
    char Char;
    int Int;
};

int main()
{
    int Int=2;
    cout<<Int;
    enum ans {yes,no,whoknows};
    enum ans a[3];
    a[0]=no;
    a[2]=yes;
    a[1]=whoknows;
    for(int i=0;i<3;i++)
        cout<<a[i];
    return 0;
}