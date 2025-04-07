//
// Created by nasre on 07.04.2025.
//
#pragma once
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
using namespace std;



class Account{
  private:
    static constexpr const char * def_name ="Unnamed";
    static constexpr double  def_balance = 0;
  protected:
    string name;
    double balance;
  public:
    Account(string name= def_name , double balance = def_balance);
    bool deposit(double amount);
    bool withdraw(double amount);
    friend ostream& operator<<(ostream& os, const Account& account);




};


