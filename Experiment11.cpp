// Write a C++ program to find largest and smallest of ‘n’ numbers using function template.
#include <iostream>
using namespace std;
template <class T>
T largest(T *arr, T n)
{
    T lar = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > lar)
        {
            lar = arr[i];
        }
    }
    return lar;
}
template <class T>
T smallest(T *arr, T n)
{
    T small = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    return small;
}

int main()
{
    int *arr, n, small, lar;
    cout << "How many number do you want to enter" << endl;
    cin >> n;
    arr = new int[n];
    cout << "Enter " << n << " numbers " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    lar = largest(arr, n);
    small = smallest(arr, n);
    cout << "Largest number is : " << lar << endl;
    cout << "Smallest number is : " << small << endl;
    return 0;
}