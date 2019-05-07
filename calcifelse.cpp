#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double a,b;

    beginning:
    system("cls");
    cout<<"Enter First Number: "<<endl;
    cin>>a;
    cout<<"Enter Second Number: "<<endl;
    cin>>b;

    char desc;
    cout<<"Which action do you want to perform?"<<endl;
    cout<<"+ Addition"<<endl;
    cout<<"- Substraction"<<endl;
    cout<<"* Multiplication"<<endl;
    cout<<"/ Division"<<endl;
    cin>>desc;
    system("cls");

    if (desc == '+')
        cout<<a<<"+"<<b<<"="<<(a+b)<<endl;
    else if (desc == '-')
        cout<<a<<"-"<<b<<"="<<(a-b)<<endl;
    else if (desc == '*')
        cout<<a<<"*"<<b<<"="<<(a*b)<<endl;
    else if (desc == '/')
    {
        if (b!=0)
            cout<<a<<"/"<<b<<"="<<(a/b)<<endl;
        else
            cout<<"Cannot divide by 0"<<endl;
    }
    else
        cout<<"Invalid Selection!"<<endl;
    char desc2;
    cout<<"Do you want to continue? (Y/N)"<<endl;
    cin>>desc2;

    if (desc2 == 'y' || desc2 == 'Y')
        goto beginning;
    else
        cout<<"Thank You!";
}
