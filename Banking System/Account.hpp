#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

class Account {
private:
    int accountNumber;
    std::string accountHolderName;
    double balance;

public:
    Account(int accNo, std::string name, double initialBalance);

    int getAccountNumber();
    std::string getAccountHolderName();
    double getBalance();

    void deposit(double amount);
    void withdraw(double amount);
    void displayAccountDetails();
};

#endif // ACCOUNT_HPP
