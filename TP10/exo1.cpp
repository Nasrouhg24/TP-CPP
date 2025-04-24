/**
 * Author: Nasreddine El Gourji
 * Created on: 21.04.2025 at 17:48
 * Description: exo1.cpp
 */

//
// Created by nasre on 21.04.2025.
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

template<typename T>
T maximum (const T& a,const T& b){
  if (a>b){
    return a;
  }
  return b;
}


template<>
string maximum (const string& a,const string& b){
  if(a.string::compare(b)>0){
   return a;

  }
  return b;

}




int main() {

  cout << maximum(5, 10) << endl; // Affiche 10
  cout << maximum(3.14, 2.71) << endl; // Affiche 3.14
  cout << maximum(string("chat"), string("chien")) << endl; // Affiche chien
  return 0;
}
