/**
 * Author: Nasreddine El Gourji
 * Created on: 28.04.2025 at 17:27
 * Description: exo2.cpp
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

#include <functional>

using namespace std;


void filtrer (const vector<int> &vect,function<bool(int)> predicat){
  for (int x : vect){
    if (predicat(x)){
      cout<<x<<" ";
    }
  }
};

int main() {
  vector<int> vect={10,15,20,25,30,50,75};


  cout << "Prédicat : x>20"<<endl;
  filtrer(vect,[](int x){return x>20;});

  cout << "Prédicat : x %2 == 0"<<endl;
  filtrer(vect,[](int x){return x%2==0;});

  cout << endl;



  

    return 0;
}
