// Write a C++ program using dynamic binding method.
#include <iostream>
using namespace std;
class One
{
private:
    int num;

public:
    virtual void read()
    {
        cout << "Enter the value of num in base object" << endl;
        cin >> num;
    }
    virtual void print()
    {
        cout << "The value of num : " << num << endl;
    }
};

class Two : public One
{
private:
    int num;

public:
    void read()
    {
        cout << "Enter the value of the num in the derived object" << endl;
        cin >> num;
    }
    void print()
    {
        cout << "The value of num : " << num << endl;
    }
};
int main()
{
    One *obj, obj1;
    Two obj2;
    obj = &obj1;
    obj->read();
    obj->print();
    obj = &obj2;
    obj->read();
    obj->print();

    return 0;
}