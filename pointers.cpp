#include <iostream>
using namespace std;

int main()
{
    int var=5;
    int *p;
    p=&var;

    cout<<"Value of variable: "<<var<<endl;
    cout<<"Address of variable: "<<&var<<endl;

    cout<<"Pointer pointing to value: "<<*p<<endl;
    cout<<"Address in Pointer: "<<p<<endl;

    *p=60;
    cout<<endl;

    cout<<"Value of variable: "<<var<<endl;
    cout<<"Address of variable: "<<&var<<endl;

    cout<<"Pointer pointing to value: "<<*p<<endl;
    cout<<"Address in Pointer: "<<p<<endl;
}
