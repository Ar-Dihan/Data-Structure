#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;

protected:
    int balance;

private:
    string password;

public:
    BankAccount(string account_holder, string address, int age, string password)
    {
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand() % 1000000000;
        this->balance = 100;
        cout << "Yout ac num. is " << this->account_number << endl;
    }

    int show_balance(string password)
    {
        if (this->password == password)
        {
            return balance;
        }
        else
        {
            return -1;
        }
    }
};

BankAccount *createAccount()
{
    string account_holder, address, password;
    int age;
    cout << "Create Account" << endl;
    cin >> account_holder >> address >> age >> password;
    BankAccount *myAccount = new BankAccount(account_holder, address, age, password);
    return myAccount;
}

int main()
{
    BankAccount *myAccount = createAccount();
    if (myAccount->show_balance("abc") == -1)
    {
        cout << "password didnt matched" << endl;
    }

    else
    {
        cout << "Your bank balance is " << myAccount->show_balance("abc") << endl;
    }
    return 0;
}