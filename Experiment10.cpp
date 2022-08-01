/*Write a C++ program to read two numbers. Find its division using exception handling
method.
*/

#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    try
    {
        cout << "Enter two number for division" << endl;
        cin >> n1 >> n2;
        if (n2 == 0)
            throw n2;

        float res=n1/n2;
        cout<<n1<<"/"<<n2<<" : "<<n1/n2<<endl;
    }
    catch (float e)
    {
        cout << n1 << "/" << n2 << endl;
        cout <<"Division by zero"<<endl;
    }

    return 0;
}