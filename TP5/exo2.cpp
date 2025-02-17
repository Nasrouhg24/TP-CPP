/**
 * Author: Nasreddine El Gourji
 * Created on: 17.02.2025 at 16:39
 * Description: exo2.cpp
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
// Optional headers (uncomment if needed)
// #include <fstream>    // For file I/O
// #include <thread>     // For multithreading
// #include <queue>      // For queue data structure
// #include <stack>      // For stack data structure
#include <unordered_map>
#include<string>
using namespace std;

void word_frequency(const string& text ) {
     unordered_map<string, int> freq;
     istringstream ss(text);
     string word;
     while(ss >> word) {
       if (freq.find(word) == freq.end()){
         freq[word]= 0;
       }
       freq[word]++;
     }
     for (auto it = freq.begin(); it != freq.end(); it++) {
       cout << it->first << "->" << it->second << endl;
     }
}

int main() {

    string text="C++ est puissant est rapide est efficace";
    word_frequency(text);


    return 0;
}
