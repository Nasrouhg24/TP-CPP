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


class Container: public Ressource {
  private:
    string image_;
  public :
    Container(string id , string image , double cpu , double memory );
    void start() override;
    void stop() override;
    string getMetrics() const override;
    friend ostream& operator<<(ostream& os, const Container& c);

    double getCpu() const ;
    double getMemory() const ;
    friend class Pod ;
};