/*Write a C++ program to add and subtract two times.*/

#include <iostream>
using namespace std;

class Time
{
private:
    int hh, mm, ss;

public:
    void read()
    {
        cout << "Enter hour, minute, second" << endl;
        cin >> hh >> mm >> ss;
    }
    void print()
    {
        cout << hh<<" hh"<< " :" << mm<<" mm" << " :" << ss<<" ss" << endl;
    }
    Time sum(Time B)
    {
        Time temp;
        temp.ss = ss + B.ss;
        temp.mm = mm + B.mm + (temp.ss / 60);
        temp.hh = hh + B.hh + (temp.mm / 60);
        temp.mm = temp.mm % 60;
        temp.ss = temp.ss % 60;
        return temp;
    }
    Time diff(Time B)
    {
        Time C;
        if (B.ss > ss)
        {
            --mm;
            ss += 60;
        }
        C.ss = ss - B.ss;
        if (B.mm > mm)
        {
            --hh;
            hh += 60;
        }
        C.mm = mm - B.mm;
        C.hh = hh - B.hh;
        return C;
    }
};

int main()
{
    Time obj1, obj2, sum,diff;
    cout << "Reading First Time" << endl;
    obj1.read();
    cout<<"First time : ";
    obj1.print();
    cout << "Reading Second Time" << endl;
    obj2.read();
    cout<<"Second time : ";
    obj2.print();

    sum = obj1.sum(obj2);
    cout<<"Sum of two time : "<<endl;
    sum.print();
    diff=obj1.diff(obj2);
    cout<<"Difference of two time : "<<endl;
    diff.print();

    return 0;
}