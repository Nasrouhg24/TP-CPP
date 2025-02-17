/**
 * Author: Nasreddine El Gourji
 * Created on: 17.02.2025 at 17:49
 * Description: exo5.cpp
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
void sort_by_length(const std::string& text){
    std::multimap<int, std::string> word_map;
    stringstream ss(text);
    string word;
    while(ss>>word){
      word_map.insert(make_pair(word.length(), word));

    }
    for(auto it = word_map.begin(); it != word_map.end(); it++){
      cout <<  it->second <<" ";

    }
}

int main() {

    string text="Le langage C++ est rapide et efficace";
    sort_by_length(text);
    return 0;
}
