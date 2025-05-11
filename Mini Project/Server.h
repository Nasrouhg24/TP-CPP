//
// Created by nasre on 14.04.2025.
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
#include <string>
#include "Ressource.h"
using namespace std;

class Server: public Ressource {
  private:
    double available_cpu_;
    double available_memory_;
  public:
    Server(string id, double cpu, double memory);
    bool allocate(double cpu, double memory);
    void start() override;
    void stop() override;
    string get_id() const ;
    string getMetrics() const override;
    friend ostream& operator<<(ostream& os, const Server& server);
    bool isActive() const; //for the function in the main
};
