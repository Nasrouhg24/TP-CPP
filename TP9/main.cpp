/**
 * Author: Nasreddine El Gourji
 * Created on: 07.04.2025 at 20:51
 * Description: main.cpp
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


#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    std::cout.precision(2);
    std::cout << std::fixed;

    // Accounts
    std::vector<Account> accounts{
        Account{},
        Account{"Larry"},
        Account{"Moe", 2000},
        Account{"Curly", 5000}
    };

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    // Savings
    std::vector<Savings_Account> sav_accounts{
        Savings_Account{},
        Savings_Account{"Superman"},
        Savings_Account{"Batman", 2000},
        Savings_Account{"Wonderwoman", 5000, 5.0}
    };

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    // Checking
    std::vector<Checking_Account> check_accounts{
        Checking_Account{},
        Checking_Account{"Kirk"},
        Checking_Account{"Spock", 2000},
        Checking_Account{"Bones", 5000}
    };

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    // Trust
    std::vector<Trust_Account> trust_accounts{
        Trust_Account{},
        Trust_Account{"Athos", 10000, 5.0},
        Trust_Account{"Porthos", 20000, 4.0},
        Trust_Account{"Aramis", 30000}
    };

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 3000);

    for (int i = 1; i <= 5; ++i)
        withdraw(trust_accounts, 1000);

    return 0;
}
