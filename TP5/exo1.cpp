/**
 * Author: Nasreddine El Gourji
 * Created on: 17.02.2025 at 16:00
 * Description: exo1.cpp
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

// Optional headers (uncomment if needed)
// #include <fstream>    // For file I/O
// #include <thread>     // For multithreading
// #include <queue>      // For queue data structure
// #include <stack>      // For stack data structure

#include <sstream>
using namespace std;

bool is_palindrome(string& s){
  string s_new;
  for(int i = 0; i < s.length(); i++){
    if(s[i]!=' '){
      s_new+=s[i];
    }
  }

  for (int i=0; i < s_new.length()/2; i++){
    if (s_new[i] != ' '){
      if (tolower(s_new[i]) != tolower(s_new[s_new.length()-1-i])){
        return false;
      }
    }

  }
  return true;
}

int main() {
  string s="Engage le jeu que je le gagne";
  cout << is_palindrome(s) << endl;



    return 0;
}
