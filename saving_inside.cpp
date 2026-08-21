#include <iostream>
using namespace std;

// Saving Account Class
class SavingAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

public:
    SavingAccount(string name = "", int accNumber = 0,
                  double initialBalance = 0, double rate = 0)
    {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        interestRate = rate;
    }

    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
    }

    void applyInterest()
    {
        balance += balance * interestRate / 100;
    }

    void display()
    {
        cout << "\n[Saving Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};


// Checking Account Class
class CheckingAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

public:
    // SavingAccount object created inside CheckingAccount
    SavingAccount savings;

    CheckingAccount(string name, int accNumber, double initialBalance,
                    double fee,
                    string sName, int sAccNumber,
                    double sBalance, double sRate)
        : savings(sName, sAccNumber, sBalance, sRate)
    {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        transactionFee = fee;
    }

    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount + transactionFee <= balance)
            balance -= amount + transactionFee;
    }

    void display()
    {
        cout << "\n[Checking Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction Fee: Rs." << transactionFee << endl;
    }
};


// Main Function
int main()
{
    // CheckingAccount contains a SavingAccount object
    CheckingAccount checking(
        "Bob", 1002, 3000.0, 20.0,
        "Alice", 1001, 5000.0, 3.0
    );

    // Access SavingAccount object through CheckingAccount
    checking.savings.display();

    checking.savings.deposit(1000);
    checking.savings.withdraw(2000);
    checking.savings.applyInterest();

    checking.savings.display();

    // Operations on Checking Account
    checking.display();

    checking.deposit(1500);
    checking.withdraw(1000);

    checking.display();

    return 0;
}
