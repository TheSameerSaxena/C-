#include <iostream>
using namespace std;

int main()
{
    string name = "Sameer";
    cout<<"Your name is "<<name<<" and address of variable is: "<<&name<<endl;

    string &refvar = name;
    cout<<"Your name is "<<refvar<<" and address of variable is: "<<&refvar<<endl;

    //we can also change the data of "&refvar" i.e., the data of "name" variable

    refvar = "Scott";
    cout<<"Your name is "<<name<<" and address of variable is: "<<&name<<endl;
    cout<<"Your name is "<<refvar<<" and address of variable is: "<<&refvar<<endl;
}

