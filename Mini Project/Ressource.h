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


using namespace std;


class Ressource {
  protected:
    string id_ ;
    double cpu_ ;
    double memory_;
    bool active_ ;
  public :
    Ressource(string id, double cpu, double memory) ;
    virtual void start()= 0;
    virtual void stop() =0;
    virtual string getMetrics() const =0;
    virtual ~Ressource() = default ;


};