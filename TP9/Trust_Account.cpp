/**
 * Author: Nasreddine El Gourji
 * Created on: 07.04.2025 at 17:55
 * Description: Trust_Account.cpp
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
#include "Trust_Account.h"
using namespace std;

Trust_Account::Trust_Account(string name , double balance, double int_rate ): Savings_Account(name,balance,int_rate){
    this->num_withdraws = 0 ;
};

bool Trust_Account::deposit(double amount){
  if (amount >= bonus_threshold){
    amount+=bonus_amount;
  }
  return Savings_Account::deposit(amount);;
};

bool Trust_Account::withdraw(double amount){
  if (num_withdraws < max_withdrawls){
    if (amount <= (balance*max_withdraw_percent)){
      num_withdraws++;
      return Savings_Account::withdraw(amount);

    }
  }
  return false;
}

ostream& operator<<(std::ostream& os, const Trust_Account& acc){
  os << "[Trust_Account: " << acc.name << ": " << acc.balance << ", " << acc.int_rate << "%, Withdrawals: " << acc.num_withdraws <<  "]";
  return os;

}