/**
 * Author: Nasreddine El Gourji
 * Created on: 24.03.2025 at 15:26
 * Description: exo1.cpp
 */

//
// Created by nasre on 24.03.2025.
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

bool estParfait(int n){
  int sum=0;
  for(int i =1 ;i<n;i++){
    if (n%i==0){
      sum +=i;
    }

  }
  return sum==n;

};

int main() {
  cout << "est ce que 6 est un nombre parfait :"<<estParfait(6)<<endl;
  cout << "est ce que 12 est un nombre parfait :"<<estParfait(12)<<endl;

    return 0;
}
