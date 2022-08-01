/*Write a C++ program to add, subtract, and product of two matrices of order 3X3 using
operator overloading.*/
#include <iostream>
using namespace std;

class Matrix
{
private:
    int mat[3][3];

public:
    void read()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void print()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator+(Matrix B)
    {
        Matrix C;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                C.mat[i][j] = mat[i][j] + B.mat[i][j];
            }
        }
        return C;
    }
    Matrix operator-(Matrix B)
    {
        Matrix C;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                C.mat[i][j] = mat[i][j] - B.mat[i][j];
            }
        }
        return C;
    }
    Matrix operator*(Matrix B)
    {
        Matrix C;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                C.mat[i][j] = 0;
                for (int k = 0; k < 3; k++)
                {
                    C.mat[i][j] += mat[i][k] * B.mat[k][j];
                }
            }
        }
        return C;
    }
};
int main()
{
    Matrix A, B, sum, sub, mul;
    cout << "Enter the element of the matrix-A" << endl;
    A.read();
    cout << "Enter the element of the matrix-B" << endl;
    B.read();
    sum = A + B;
    sub = A - B;
    mul = A * B;
    cout << "Sum of the two matrix is" << endl;
    sum.print();
    cout << "Subtraction of the two matrix is" << endl;
    sub.print();
    cout << "Multiplication of the two Matrix is " << endl;
    mul.print();
    return 0;
}