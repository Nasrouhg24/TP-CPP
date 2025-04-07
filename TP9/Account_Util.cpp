/**
 * Author: Nasreddine El Gourji
 * Created on: 07.04.2025 at 20:32
 * Description: Account_Util.cpp
 */

//
// Created by nasre on 07.04.2025.
//


// Optional custom header

// Standard Libraries
#include <iostream>      // For input/output operations
#include <vector>        // For dynamic arrays
#include <string>        // For string manipulations
#include <algorithm>     // For sorting, searching, etc.
#include <cmath>         // For mathematical functions
#include <map>           // For key-value data structures
#include <set>           // For unique collections
#include <unordered_map> // For faster key-value lookups
#include <limits>        // For numeric limits
#include <cstdlib>       // For general-purpose functions
#include <ctime>         // For time-related functions
#include <sstream> 
#include <string> 
// Optional headers (uncomment if needed)
// #include <fstream>    // For file I/O
// #include <thread>     // For multithreading
// #include <queue>      // For queue data structure
// #include <stack>      // For stack data structure



#include "Account_Util.h"

// ================ Account Utilities =================
void display(const std::vector<Account>& accounts) {
    std::cout << "\n=== Accounts ======================================" << std::endl;
    for (const auto& acc : accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Account>& accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts ========================" << std::endl;
    for (auto& acc : accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited $" << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of $" << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Account>& accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ======================" << std::endl;
    for (auto& acc : accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew $" << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of $" << amount << " from " << acc << std::endl;
    }
}

// ================ Savings_Account Utilities =================
void display(const std::vector<Savings_Account>& accounts) {
    std::cout << "\n=== Savings Accounts ==============================" << std::endl;
    for (const auto& acc : accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Savings_Account>& accounts, double amount) {
    std::cout << "\n=== Depositing to Savings ========================" << std::endl;
    for (auto& acc : accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited $" << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of $" << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Savings_Account>& accounts, double amount) {
    std::cout << "\n=== Withdrawing from Savings ======================" << std::endl;
    for (auto& acc : accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew $" << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of $" << amount << " from " << acc << std::endl;
    }
}

// ================ Trust_Account Utilities =================
void display(const std::vector<Trust_Account>& accounts) {
    std::cout << "\n=== Trust Accounts ==============================" << std::endl;
    for (const auto& acc : accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Trust_Account>& accounts, double amount) {
    std::cout << "\n=== Depositing to Trust ========================" << std::endl;
    for (auto& acc : accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited $" << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of $" << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Trust_Account>& accounts, double amount) {
    std::cout << "\n=== Withdrawing from Trust ======================" << std::endl;
    for (auto& acc : accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew $" << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of $" << amount << " from " << acc << std::endl;
    }
}

// ================ Checking_Account Utilities =================
void display(const std::vector<Checking_Account>& accounts) {
    std::cout << "\n=== Checking Accounts ==============================" << std::endl;
    for (const auto& acc : accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Checking_Account>& accounts, double amount) {
    std::cout << "\n=== Depositing to Checking ========================" << std::endl;
    for (auto& acc : accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited $" << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of $" << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Checking_Account>& accounts, double amount) {
    std::cout << "\n=== Withdrawing from Checking ======================" << std::endl;
    for (auto& acc : accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew $" << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of $" << amount << " from " << acc << std::endl;
    }
}
