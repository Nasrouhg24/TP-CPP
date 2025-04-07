/**
 * Author: Nasreddine El Gourji
 * Created on: 07.04.2025 at 17:16
 * Description: Savings_Account.cpp
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
#include "Savings_Account.h"
using namespace std;

Savings_Account::Savings_Account(string name, double balance, double interest_rate): Account(name, balance), int_rate{interest_rate}{

}


bool Savings_Account::deposit(double amount) {
  if (amount < 0) return false;
  amount += amount *((int_rate/100));
  return Account::deposit(amount);
}


std::ostream& operator<<(ostream& os, const Savings_Account& account) {
    os << "[Account: " << account.name << ": " << account.balance <<", "<<account.int_rate  <<"]";
    return os;
}
