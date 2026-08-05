#include <iostream>
using namespace std;

int main()
{
    int *arr;
    int size, sum = 0;

    cout << "Enter the size of array: ";
    cin >> size;

    arr = new int[size];

    cout << "Enter the array elements:" << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum = " << sum << endl;

    delete[] arr;

    return 0;
}
