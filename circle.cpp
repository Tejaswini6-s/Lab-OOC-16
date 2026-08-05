#include <iostream>
using namespace std;
int main()
{
    float r, area, circumference;
    cout << "Enter radius: ";
    cin >> r;
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference;
    return 0;
}
