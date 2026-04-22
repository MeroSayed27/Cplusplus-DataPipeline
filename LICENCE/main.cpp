#include <iostream>
#include "pipeline.h"

int main() {
    double balance{};
    int choice{};

    std::cout << "=== Bank Account Management System ===\n\n";
    std::cout << "1. Deposit\n";
    std::cout << "2. Withdraw\n";
    std::cout << "3. Check Balance\n";
    std::cout << "4. Exit\n";
    std::cout << "--------------------------------------\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            double depositAmount{};
            std::cout << "Enter deposit amount: ";
            std::cin >> depositAmount;
            if (depositAmount > 0) {
                balance += depositAmount;
                std::cout << "✅ Deposit successful!\nNew Balance: " << balance << " EGP\n";
            } else {
                std::cout << "❌ Deposit failed. Amount must be greater than zero.\n";
            }
            break;
        }
        case 2: {
            double withdrawAmount{};
            std::cout << "Enter withdraw amount: ";
            std::cin >> withdrawAmount;
            if (withdrawAmount > 0) {
                if (withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                    std::cout << "✅ Withdrawal successful!\nNew Balance: " << balance << " EGP\n";
                } else {
                    std::cout << "❌ Withdrawal failed. Insufficient balance.\n";
                }
            } else {
                std::cout << "❌ Withdrawal failed. Amount must be greater than zero.\n";
            }
            break;
        }
        case 3:
            std::cout << "📊 Current Balance: " << balance << " EGP\n";
            break;
        case 4:
            std::cout << "👋 Exiting... Thank you for using the Bank Account System.\n";
            return 0;
        default:
            std::cout << "⚠️ Invalid choice. Please try again.\n";
            break;
    }

    return 0;
}
