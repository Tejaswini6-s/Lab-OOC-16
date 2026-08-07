#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productId;
    string name;
    int quantity;
    float price;

public:
    void inputDetails()
    {
        cout << "Enter Product ID: ";
        cin >> productId;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void displayDetails()
    {
        cout << "\n----- Product Details -----" << endl;
        cout << "Product ID : " << productId << endl;
        cout << "Product Name : " << name << endl;
        cout << "Quantity : " << quantity << endl;
        cout << "Price : " << price << endl;
        cout << "Total Bill : " << quantity * price << endl;
    }
};

int main()
{
    Product p;

    p.inputDetails();
    p.displayDetails();

    return 0;
}
