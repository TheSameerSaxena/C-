#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int size;
    int *p;

    beginning:
    system("cls");
    cout<<"Enter size of the array: ";
    cin>>size;

    p= new int[size];
    cout<<"Enter the values to be stored in an array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }
    cout<<"The values stored in an array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<endl;
    }
    string choice;
    cout<<"Do you wish to continue? (Y/N): ";
    cin>>choice;
    if (choice == "Y" || choice == "y")
        goto beginning;
    else
        cout<<"Thank you!";
}
