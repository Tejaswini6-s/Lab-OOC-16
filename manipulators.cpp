#include <iostream>
using namespace std;

// Function Prototypes
int area(int);
int area(int, int);
float area(float);

int main()
{
    cout << "Area of Square = " << area(5) << endl;
    cout << "Area of Rectangle = " << area(5, 10) << endl;
    cout << "Area of Circle = " << area(5.5f) << endl;

    return 0;
}

// Area of Square
int area(int side)
{
    return side * side;
}

// Area of Rectangle
int area(int length, int breadth)
{
    return length * breadth;
}

// Area of Circle
float area(float radius)
{
    return 3.14 * radius * radius;
}manipulators
