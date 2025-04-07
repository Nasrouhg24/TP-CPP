/**
 * Author: Nasreddine El Gourji
 * Created on: 07.04.2025 at 17:48
 * Description: Checking_Account.cpp
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
#include "Checking_Account.h"
using namespace std;

Checking_Account::Checking_Account(string name,double balance):Account(name,balance){};

bool Checking_Account::withdraw(double amount){
  amount += per_check_fee;
  return Account::withdraw(amount);
};


std::ostream& operator<<(ostream& os, const Checking_Account& acc){
  cout <<"[Checking Account: "<<acc.name<<": "<<acc.balance<<"]";
  return os;
};