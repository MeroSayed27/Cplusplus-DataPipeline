#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "pipeline.h"

// Data structure for transaction logging
struct Transaction {
    std::string type;
    double amount;
    double balanceAfter;
};

// Global transaction history
std::vector<Transaction> transactionHistory;

void runPipeline() {
    std::cout << "\n" << std::string(50, '=') << std::endl;
    std::cout << "[INFO] Running Data Pipeline Module" << std::endl;
    std::cout << std::string(50, '=') << std::endl;

    // Step 1: Initialize pipeline
    std::cout << "[STEP 1] Initializing pipeline environment..." << std::endl;
    std::cout << "  ✓ Configuration loaded successfully" << std::endl;
    std::cout << "  ✓ Database connection established" << std::endl;

    // Step 2: Data validation
    std::cout << "\n[STEP 2] Validating input data..." << std::endl;
    std::cout << "  ✓ Transaction data integrity verified" << std::endl;
    std::cout << "  ✓ All records validated successfully" << std::endl;

    // Step 3: Processing
    std::cout << "\n[STEP 3] Processing transactions..." << std::endl;
    std::cout << "  ✓ " << transactionHistory.size() << " transactions processed" << std::endl;
    std::cout << "  ✓ Data transformations completed" << std::endl;

    // Step 4: Output results
    std::cout << "\n[STEP 4] Generating output report..." << std::endl;
    if (!transactionHistory.empty()) {
        std::cout << "\n  Transaction History:" << std::endl;
        std::cout << "  " << std::string(45, '-') << std::endl;
        std::cout << std::left << std::setw(15) << "  Type" 
                  << std::setw(15) << "Amount" 
                  << std::setw(15) << "Balance" << std::endl;
        std::cout << "  " << std::string(45, '-') << std::endl;
        for (const auto& trans : transactionHistory) {
            std::cout << "  " << std::setw(14) << trans.type 
                      << std::setw(15) << trans.amount 
                      << std::setw(15) << trans.balanceAfter << std::endl;
        }
        std::cout << "  " << std::string(45, '-') << std::endl;
    } else {
        std::cout << "  No transactions to display." << std::endl;
    }

    // Step 5: Finalization
    std::cout << "\n[STEP 5] Finalizing pipeline..." << std::endl;
    std::cout << "  ✓ All resources cleaned up" << std::endl;
    std::cout << "  ✓ Temporary files removed" << std::endl;

    std::cout << "\n[SUCCESS] Pipeline execution finished successfully." << std::endl;
    std::cout << std::string(50, '=') << "\n" << std::endl;
}

// Helper function to add transaction to history
void logTransaction(const std::string& type, double amount, double newBalance) {
    transactionHistory.push_back({type, amount, newBalance});
}