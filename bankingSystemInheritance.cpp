#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    string name;
    int accountNumber;
    double balance;

public:
    Account(string n, int number, double amount)
    {
        name = n;
        accountNumber = number;
        balance = amount;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid amount!" << endl;
        }
    }

    virtual void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount!"
                 << endl;
        }
    }

    virtual void display()
    {
        cout << "\nAccount Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual ~Account() {}
};

class SavingsAccount : public Account
{
private:
    double interestRate;

public:
    SavingsAccount(string n, int number, double amount,
                   double rate)
        : Account(n, number, amount)
    {
        interestRate = rate;
    }

    void applyInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;

        cout << "Interest Added: " << interest << endl;
    }

    void display() override
    {
        cout << "\n--- Savings Account ---" << endl;
        Account::display();
        cout << "Interest Rate: " << interestRate
             << "%" << endl;
    }
};

class CheckingAccount : public Account
{
private:
    double transactionFee;

public:
    CheckingAccount(string n, int number, double amount,
                    double fee)
        : Account(n, number, amount)
    {
        transactionFee = fee;
    }

    void withdraw(double amount) override
    {
        double total = amount + transactionFee;

        if (amount > 0 && total <= balance)
        {
            balance -= total;

            cout << "Withdrawn: " << amount << endl;
            cout << "Transaction Fee: "
                 << transactionFee << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount!"
                 << endl;
        }
    }

    void display() override
    {
        cout << "\n--- Checking Account ---" << endl;
        Account::display();
        cout << "Transaction Fee: "
             << transactionFee << endl;
    }
};

int main()
{
    SavingsAccount savings("Alice", 1001, 5000, 3);
    CheckingAccount checking("Bob", 1002, 3000, 20);

    savings.display();
    savings.deposit(1000);
    savings.withdraw(2000);
    savings.applyInterest();
    savings.display();

    checking.display();
    checking.deposit(1500);
    checking.withdraw(1000);
    checking.display();

    return 0;
}
