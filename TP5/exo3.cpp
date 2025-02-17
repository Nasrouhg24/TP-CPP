/**
 * Author: Nasreddine El Gourji
 * Created on: 17.02.2025 at 17:00
 * Description: exo3.cpp
 */

//
// Created by nasre on 17.02.2025.
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
string encode_rle(string& s){
  string rle;
  int len = s.length();
  int i = 0, j = 0;
  while(i < len){
    while(j<len &&s[j] == s[i] ){
      j++;
    }
    rle += s[i];
    int freq= (j-i);
    rle += to_string(freq);
    i=j;

  }
  return rle;
}


int main() {
    string s="aaabbccccddaaee";
    cout<<encode_rle(s);

    return 0;
}
