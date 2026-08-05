#include <iostream>
using namespace std;

int main()
{
    int *arr;
    int size;

    cout << "Enter the size of the integer array: ";
    cin >> size;

    cout << "Creating an array of size " << size << "..." << endl;

    arr = new int[size];

    cout << "Dynamic allocation of memory for array arr is successful." << endl;

    delete[] arr;

    return 0;
}
