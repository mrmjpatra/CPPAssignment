/*
Write a C++ program to read N employees name, gender, post, and salary in an array of
object called EMP. Then display all the details.
*/

#include <iostream>
using namespace std;
class Employees
{
private:
    char name[20];
    char gender[7];
    char post[30];
    float salary;

public:
    void read()
    {
        getchar();
        cout << "Enter the employee name : ";
        cin.getline(name, 20);
        cout << "Enter Gender : ";
        cin.getline(gender, 7);
        cout << "Enter Post : ";
        cin.getline(post, 30);
        cout << "Enter Salary : ";
        cin >> salary;
    }

    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Gender : " << gender << endl;
        cout << "Post : " << post << endl;
        cout << "Salary : " << salary << endl;
    }
};
int main()
{
    Employees EMP[50];
    int n;
    cout << "How many number of employees data you want to store" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Employee-" << i + 1 << " Details " << endl;
        EMP[i].read();
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Employee-" << i + 1 << " Details :" << endl;
        EMP[i].print();
    }

    return 0;
}