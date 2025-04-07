/**
 * Author: Nasreddine El Gourji
 * Created on: 07.04.2025 at 17:05
 * Description: Account.cpp
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
using namespace std;

Account::Account(string name , double balance ){
  this->name = name;
  this->balance = balance;
}

bool Account::deposit(double amount){
  if (amount >= 0){
    balance += amount;
    return true;
  }
  return false;
}

bool Account::withdraw(double amount){
  if (amount < 0 or amount > balance){
    return false;
  }
  balance -= amount;
  return true;
}


std::ostream& operator<<(std::ostream& os, const Account& acc) {
  os << "[Account: " << acc.name << ": " << acc.balance << "]";
  return os;
}


