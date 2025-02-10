/**
 * Author: Nasreddine El Gourji
 * Created on: 10.02.2025 at 14:23
 * Description: one.cpp
 */

//
// Created by nasre on 10.02.2025.
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
#include <array>

using namespace std;

int main() {
    array<char,3> f ={'a','b'};

    auto i = f.begin();
    cout<<i<<endl;
    i++;
    cout<<*i<<endl;
    for (auto it = f.begin(); it != f.end(); it++) {
        cout<<*it<<endl;
    }
    return 0;
}
