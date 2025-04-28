/**
 * Author: Nasreddine El Gourji
 * Created on: 28.04.2025 at 17:40
 * Description: exo3.cpp
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


int main() {
    vector<int> v={10,12,15,17};


    transform(v.begin(), v.end(), v.begin(), [](int i){ return i+5;});

    for ( int& num : v) {
      cout << num << " " ;
    }
    cout << endl;
    return 0;
}
