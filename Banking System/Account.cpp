#include "Account.hpp"
#include <iostream>
#include <iomanip>

Account::Account(int accNo, std::string name, double initialBalance) {
    accountNumber = accNo;
    accountHolderName = name;
    balance = initialBalance;
}

int Account::getAccountNumber() {
    return accountNumber;
}

std::string Account::getAccountHolderName() {
    return accountHolderName;
}

double Account::getBalance() {
    return balance;
}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Amount deposited successfully.\n";
    } else {
        std::cout << "Invalid amount.\n";
    }
}

void Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Amount withdrawn successfully.\n";
    } else {
        std::cout << "Insufficient balance or invalid amount.\n";
    }
}

void Account::displayAccountDetails() {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Account Holder: " << accountHolderName << std::endl;
    std::cout << "Balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
}
