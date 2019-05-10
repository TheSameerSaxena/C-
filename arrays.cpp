/*Write an application that asks the user to input four numbers. The inputted numbers should be stored in a 4 element array of doubles. The numbers should be
summarized and the result printed in the console as well as the address of first and last element of the array.*/

/*eg.

User inputted:
val 1 = 2
val 2 = 3
val 3 = 5
val 4 = 6
*/

//Output:
//Result = 16
//Address of first element = 0x69fed8
//Address of last element = 0x69fef8

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{

double num[4];

beginning:
system("cls");

cout<<"Enter 4 Numbers"<<endl;
for(int i=0;i<4;i++)
{
    cin>>num[i];
}
system("cls");
cout<<"Inputted 4 Numbers are: "<<endl;
for(int i=0;i<4;i++)
{
    cout<<num[i]<<endl;
}
cout<<"Total is: "<<(num[0]+num[1]+num[2]+num[3])<<endl;
cout<<"Address of first element ="<<&num[0]<<endl;
cout<<"Address of last element ="<<&num[3]<<endl;

string desc;
cout<<"Do you wish to continue? (Y/N)"<<endl;
cin>>desc;

if(desc == "y" || desc == "Y")
{
    goto beginning;
}
else
    cout<<"See you later!"<<endl;
}
