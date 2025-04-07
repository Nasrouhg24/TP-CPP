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
#include "Savings_Account.h"
using namespace std;

class Trust_Account: public Savings_Account {
  private:
    static constexpr float bonus_amount = 50.0;
    static constexpr float bonus_threshold = 5000.0;
    static constexpr int max_withdrawls = 3;
    static constexpr float max_withdraw_percent = 0.2;
  protected:
    int num_withdraws;
  public :
    Trust_Account(string name ="Unamed", double balance= 0, double int_rate =0);
    bool deposit(double amount);
    bool withdraw(double amount);
    friend ostream& operator<<(ostream& os, const Trust_Account& a);
};
