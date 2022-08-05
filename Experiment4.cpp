/*Write a C++ program to add and subtract matrices a[2][3]={{1,2,3},{4,5,6}} and
b[2][3]={{7,8,9},{2,1,7}} using friend function.*/

#include <iostream>
using namespace std;
class Matrix
{
private:
    int mat[2][3];

public:
    void input()
    {

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void print()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend Matrix add(Matrix, Matrix);
    friend Matrix sub(Matrix, Matrix);
};

Matrix add(Matrix A, Matrix B)
{
    Matrix temp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.mat[i][j] = A.mat[i][j] + B.mat[i][j];
        }
    }
    return temp;
}
Matrix sub(Matrix A, Matrix B)
{
    Matrix temp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.mat[i][j] = A.mat[i][j] - B.mat[i][j];
        }
    }
    return temp;
}
int main()
{
    Matrix A, B, C, D;
    cout << "Enter the elements to the matrix-A" << endl;
    A.input();
    cout << "Enter the elements to the matrix-B" << endl;
    B.input();
    C = add(A, B);
    D = sub(A, B);
    cout << "Matrix-A is " << endl;
    A.print();
    cout << "Matrix-B is " << endl;
    B.print();
    cout << "Sum of the Two Matrix is " << endl;
    C.print();
    cout << "Subtraction of Two matrix is " << endl;
    D.print();

    return 0;
}