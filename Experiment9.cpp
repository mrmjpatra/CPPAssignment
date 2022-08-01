// Write a C++ program using pure abstract class.x

#include <iostream>
using namespace std;
class Number
{
public:
    virtual void read() = 0;
    virtual void print() = 0;
};
class Sum : public Number
{
private:
    float a, b;

public:
    void read()
    {
        cout << "Enter two number for Addition" << endl;
        cin >> a >> b;
    }
    void print()
    {
        cout << "The sum of " << a << " and " << b << " is : " << a + b << endl;
    }
};

class Product:public Number{
    private:
    float a,b;
    public:
    void read(){
        cout<<"Enter two number for multiplication"<<endl;
        cin>>a>>b;
    }
    void print()
    {
        cout << "The Multiplication of " << a << " and " << b << " is : " << a * b << endl;
    }
};
int main()
{
    Sum obj1;
    Product obj2;
    obj1.read();
    obj2.read();
    obj1.print();
    obj2.print();

    return 0;
}