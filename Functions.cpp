#include <iostream>

using namespace std;

void sayHi (string name, int age);
int main()
{
    sayHi("Sameer",22);

}
void sayHi (string name, int age)
{
    cout<<"Hello "<<name<<" you are "<<age;
}
