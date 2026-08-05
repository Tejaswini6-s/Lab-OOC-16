#include <iostream>
using namespace std;
int main()
{
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "\n1.Add";
    cout << "\n2.Subtract";
    cout << "\n3.Multiply";
    cout << "\n4.Divide";
    cout << "\n5.Modulus";
    cout << "\nEnter your choice: ";
    cin >> choice;
    switch(choice)
    {
        case 1:
            cout << "Addition = " << a + b;
            break;

        case 2:
            cout << "Subtraction = " << a - b;
            break;

        case 3:
            cout << "Multiplication = " << a * b;
            break;

        case 4:
            cout << "Division = " << a / b;
            break;

        case 5:
            cout << "Modulus = " << a % b;
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
