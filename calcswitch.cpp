#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double a,b;

    beginning:
    cout<<"Enter the first Number: "<<endl;
    cin>>a;
    cout<<"Enter the second Number: "<<endl;
    cin>>b;

    cout<<"what action do you want to perform?"<<endl;
    cout<<"+ Addition"<<endl;
    cout<<"- Substraction"<<endl;
    cout<<"* Multiplication"<<endl;
    cout<<"/ division"<<endl;

    char decision;
    cin>>decision;
    system("cls");

    switch(decision)
    {
        case '+':
            cout<<"Your answer is: ";
            cout <<a<<" + "<<b<<" = "<<(a+b)<<endl;
            break;
        case '-':
            cout<<"Your answer is: ";
            cout <<a<<" - "<<b<<" = "<<(a-b)<<endl;
            break;
        case '*':
            cout<<"Your answer is: ";
            cout <<a<<" * "<<b<<" = "<<(a*b)<<endl;
            break;
        case '/':
            if (b != 0)
               // cout<<"Your answer is: ";
                cout<<"Your answer is: "<<a<<" / "<<b<<" = "<<(a/b)<<endl;
            else
                cout<<"You cannot divide by zero!";
        break;
        default:
            cout <<"Invalid Choice!";
    }
        char decision2;

        cout<<"Do you want to continue? Y or N "<<endl;
        cin>>decision2;
        system("cls");

        if(decision2 == 'y' || decision2 == 'Y')
            goto beginning;
        else
            cout<<"Thank You!";
}
