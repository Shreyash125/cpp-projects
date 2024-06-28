#ifndef BANK_HPP
#define BANK_HPP

#include "Account.hpp"
#include <vector>

class Bank {
private:
    std::vector<Account> accounts;

public:
    bool accountExists(int accNo);
    void createAccount();
    void viewAccount(int accNo);
    void deposit(int accNo, double amount);
    void withdraw(int accNo, double amount);
    void displayAllAccounts();
};

#endif // BANK_HPP
