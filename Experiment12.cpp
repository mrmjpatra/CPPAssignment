// Write a C++ program to find largest and smallest of three numbers using class template.
#include <iostream>
using namespace std;
template <class T>
class Number
{
    T num[3];

public:
    void read()
    {
        cout << "Enter Three number" << endl;

        for (int i = 0; i < 3; i++)
        {
            cin >> num[i];
        }
    }
    T largest()
    {
        T lar;
        if (num[0] > num[1] && num[0] > num[2])
        {
            lar = num[0];
        }
        else if (num[1] > num[0] && num[1] > num[2])
        {
            lar = num[1];
        }
        else
        {
            lar = num[2];
        }

        return lar;
    }
    T smallest()
    {
        T small;
        if (num[0] < num[1] && num[0] < num[2])
        {
            small = num[0];
        }
        else if (num[1] < num[0] && num[1] < num[2])
        {
            small = num[1];
        }
        else
        {
            small = num[2];
        }

        return small;
    }
};
int main()
{
    Number<int> obj;
    int lar, small;
    obj.read();
    lar = obj.largest();
    small = obj.smallest();
    cout << "Largest : " << lar << endl;
    cout << "Smallest : " << small << endl;

    return 0;
}