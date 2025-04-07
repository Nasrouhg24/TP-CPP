//
// Created by nasre on 07.04.2025.
//

#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <bitset>
#include <algorithm>
#include "Account.h"
using namespace std;

class Savings_Account : public Account{
  private:
    static constexpr double def_int_rate = 0;
  protected:
    double int_rate;
  public :
    Savings_Account(string name= "Unnamed", double balance = 0 ,  double interest_rate= def_int_rate);
    bool deposit(double amount);
    friend ostream& operator<<(ostream& os, const Savings_Account& account);



};






