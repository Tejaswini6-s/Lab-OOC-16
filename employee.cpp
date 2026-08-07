#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string designation;
    string branch;
    float basicSalary;
    float grossSalary;

public:
    void inputDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cin.ignore();

        cout << "Enter Designation: ";
        getline(cin, designation);

        cout << "Enter Branch: ";
        getline(cin, branch);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        grossSalary = basicSalary + (0.20 * basicSalary) + (0.10 * basicSalary);
    }

    void displayDetails()
    {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Employee ID   : " << empId << endl;
        cout << "Designation   : " << designation << endl;
        cout << "Branch        : " << branch << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "Gross Salary  : " << grossSalary << endl;
    }
};

int main()
{
    Employee e;

    e.inputDetails();
    e.displayDetails();

    return 0;
}
