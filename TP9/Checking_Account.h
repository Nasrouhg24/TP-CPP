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


class Checking_Account :public Account{
  private:
   static constexpr float per_check_fee = 1.5;
  public :
    Checking_Account(string name="Unnamed",double balance =0);
    bool withdraw(double amount);
    friend ostream& operator<<(ostream& os, const Checking_Account& account);

};
