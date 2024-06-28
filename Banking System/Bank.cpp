#include "Bank.hpp"
#include <iostream>

bool Bank::accountExists(int accNo) {
    for (auto &account : accounts) {
        if (account.getAccountNumber() == accNo) {
            return true;
        }
    }
    return false;
}

void Bank::createAccount() {
    int accNo;
    std::string name;
    double initialDeposit;

    std::cout << "Enter Account Number: ";
    std::cin >> accNo;
    if (accountExists(accNo)) {
        std::cout << "Account number already exists.\n";
        return;
    }
    std::cout << "Enter Account Holder Name: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "Enter Initial Deposit: ";
    std::cin >> initialDeposit;

    Account newAccount(accNo, name, initialDeposit);
    accounts.push_back(newAccount);
    std::cout << "Account created successfully.\n";
}

void Bank::viewAccount(int accNo) {
    for (auto &account : accounts) {
        if (account.getAccountNumber() == accNo) {
            account.displayAccountDetails();
            return;
        }
    }
    std::cout << "Account not found.\n";
}

void Bank::deposit(int accNo, double amount) {
    for (auto &account : accounts) {
        if (account.getAccountNumber() == accNo) {
            account.deposit(amount);
            return;
        }
    }
    std::cout << "Account not found.\n";
}

void Bank::withdraw(int accNo, double amount) {
    for (auto &account : accounts) {
        if (account.getAccountNumber() == accNo) {
            account.withdraw(amount);
            return;
        }
    }
    std::cout << "Account not found.\n";
}

void Bank::displayAllAccounts() {
    for (auto &account : accounts) {
        account.displayAccountDetails();
        std::cout << "------------------------\n";
    }
}
