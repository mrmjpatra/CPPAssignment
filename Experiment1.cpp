/*Write a C++ program to read student name, roll number, and marks in 6 subjects. Then display the output in the given format:
Name =
Roll =
Subject-1 =
Subject-2 =
Subject-3 =
Subject-4 =
Subject-5 =
Subject-6 =
Total Mark =
Average Mark =*/

#include <iostream>
using namespace std;

class Student
{
private:
    char name[32];
    int roll;
    int mark[6];

public:
    void read()
    {
        cout << "Enter the name and roll number of  Student" << endl;
        cin >> name >> roll;
        cout << "Enter the marks in 6 objects" << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << "Mark in "
                 << "subject- " << i + 1 << endl;
            cin >> mark[i];
        }
    }
    void print()
    {
        cout << "Name = " << name << endl;
        cout << "Roll = " << roll << endl;
        float tmark, avg;
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject-" << i + 1 << "= " << mark[0] << endl;
            tmark = tmark + mark[i];
        }
    }
};

int main()
{
    Student obj;
    obj.read();
    obj.print();

    return 0;
}