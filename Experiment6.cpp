// Write a C++ program using constructor overloading.

#include <iostream>
using namespace std;

class ConstructorExample
{
private:
    char name[20];
    int roll;

public:
    ConstructorExample()
    {
        cout << "Default Constructor Called" << endl;
        strcpy(name,"");
        roll=0;
    }
    ConstructorExample(char *n, int r)
    {
        strcpy(name, n);
        roll = r;
    }
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Roll No : " << roll << endl;
    }
};
int main()
{
    ConstructorExample obj1;
    ConstructorExample obj2("Mrutyunjaya", 404028);
    obj1.print();
    obj2.print();
    return 0;
}