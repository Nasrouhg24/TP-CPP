//
// Created by nasre on 05.05.2025.
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
using namespace std;


template <typename T>
class MetricLogger{
  public :
    static void logToStream(T& object, ostream& stream = cout,string msg = ""  ){
      if (msg != ""){
        stream << msg << endl;
      }
      stream << object.getMetrics() << endl;
    };
};




