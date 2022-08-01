/*Write a C++ program using Multipath Inheritance.*/

#include <iostream>
using namespace std;
class Student
{
protected:
    char name[20];
    char gender[7];
    int roll;

public:
    void read()
    {
        cout << "Enter the name of student" << endl;
        cin >> name;
        cout << "Enter Gender" << endl;
        cin >> gender;
        cout << "Enter Roll Number " << endl;
        cin >> roll;
    }
};
class Internal : virtual public Student
{
protected:
    int imark;

public:
    void read()
    {
        cout << "Enter Internal mark" << endl;
        cin >> imark;
    }
};

class External : virtual public Student
{
protected:
    int emark;

public:
    void read()
    {
        cout << "Enter External Mark" << endl;
        cin >> emark;
    }
};
class Result : public Internal, public External
{
public:
    void read()
    {
        Student::read();
        Internal::read();
        External::read();
    }
    void print()
    {
        cout << "Name of the Student : " << name << endl;
        cout << "Gender : " << gender << endl;
        cout << "Roll No. : " << roll << endl;
        cout << "Total Mark : " << imark + emark << endl;
    }
};
int main()
{
    Result obj;
    obj.read();
    obj.print();
    return 0;
}