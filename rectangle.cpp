#include <iostream>
using namespace std;
   
int main()
{
    float length, breadth, area, perimeter;

    cout << "Enter length and breadth: ";
    cin >> length >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter;

    return 0;
}
