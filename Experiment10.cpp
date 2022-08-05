/*Write a C++ program to read two numbers. Find its division using exception handling
method.
*/

#include <iostream>
using namespace std;

class Division
{
private:
    float n1, n2;

public:
    void read()
    {
        cout << "Enter two number for division" << endl;
        cin >> n1 >> n2;
    }
    void calculate()
    {
        if (n2 == 0)
            throw n2;
        cout << n1 << "/" << n2 << " : " << n1 / n2 << endl;
    }
};

int main()
{

    try
    {
        Division obj;
        obj.read();
        obj.calculate();
    }
    catch (float e)
    {
        cout << "Division by zero is not possible" << endl;
    }

    return 0;
}