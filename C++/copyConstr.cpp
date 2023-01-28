#include<iostream>
using namespace std;
class Employee{
    public:
    int id,salary;
    string empName;
    Employee(){
        cout<<"Enter the Id : ";
        cin>>id;
        cout<<"Enter the Salary : ";
        cin>>salary;
        cout<<"Enter the Name : ";
        cin>>empName;
    }
    Employee(Employee &a){
        id = a.id;
        salary = a.salary;
        empName = a.empName;
        cout<<"Id : "<<id<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Name : "<<empName<<endl;
    }
    ~Employee(){
        cout<<"Object Terminated!!!";
    }
};
int main(){
    Employee a;
    Employee b(a);
	 return 0;
}
