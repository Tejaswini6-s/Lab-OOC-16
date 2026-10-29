#include <iostream>
#include <exception>
using namespace std;

class InvalidAgeException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "Invalid age!";
    }
};

class Person
{
private:
    int age;

public:
    void setAge(int a)
    {
        if (a < 0 || a > 120)
            throw InvalidAgeException();

        age = a;
    }

    void display()
    {
        cout << "Age: " << age << endl;
    }
};

int main()
{
    int a, b;

    // Division by zero exception
    try
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (b == 0)
            throw "Division by zero is not allowed!";

        cout << "Division = "
             << (double)a / b << endl;
    }
    catch (const char* msg)
    {
        cout << "Error: " << msg << endl;
    }

    // Custom age exception
    Person p;
    int age;

    try
    {
        cout << "\nEnter age: ";
        cin >> age;

        p.setAge(age);
        p.display();
    }
    catch (const InvalidAgeException& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
