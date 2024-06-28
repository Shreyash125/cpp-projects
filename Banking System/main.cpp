#include "Bank.hpp"
#include <iostream>

int main() {
    Bank bank;
    int choice, accNo;
    double amount;

    while (true) {
        std::cout << "\n--- Banking Management System ---\n";
        std::cout << "1. Create Account\n";
        std::cout << "2. View Account\n";
        std::cout << "3. Deposit\n";
        std::cout << "4. Withdraw\n";
        std::cout << "5. View All Accounts\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                bank.createAccount();
                break;
            case 2:
                std::cout << "Enter Account Number: ";
                std::cin >> accNo;
                bank.viewAccount(accNo);
                break;
            case 3:
                std::cout << "Enter Account Number: ";
                std::cin >> accNo;
                std::cout << "Enter Amount to Deposit: ";
                std::cin >> amount;
                bank.deposit(accNo, amount);
                break;
            case 4:
                std::cout << "Enter Account Number: ";
                std::cin >> accNo;
                std::cout << "Enter Amount to Withdraw: ";
                std::cin >> amount;
                bank.withdraw(accNo, amount);
                break;
            case 5:
                bank.displayAllAccounts();
                break;
            case 6:
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
