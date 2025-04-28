/**
 * Author: Nasreddine El Gourji
 * Created on: 28.04.2025 at 17:17
 * Description: exo1.cpp
 */

//
// Created by nasre on 28.04.2025.
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

using namespace std;

class Additionneur{
 private:
    int N;
 public :
    Additionneur(int n):N(n){};
    int operator()(int x) const {
      return x + N;
    };
};


int main() {
  vector<int> v= {1,2,3,4,5,6,7,8,9,10};
  Additionneur A(10);
  for (int i=0;i<v.size();i++){
    cout << A(v[i])<<" " ;
  }

    return 0;
}
