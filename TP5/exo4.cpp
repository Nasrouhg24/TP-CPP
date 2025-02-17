/**
 * Author: Nasreddine El Gourji
 * Created on: 17.02.2025 at 17:33
 * Description: exo4.cpp
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
unordered_map<string, int> freq;


void word_frequency(const string& text ) {

    istringstream ss(text);
    string word;
    while(ss >> word) {
        if (freq.find(word) == freq.end()){
            freq[word]= 0;
        }
        freq[word]++;
    }

}
void top_frequent_words(const string& text) {
    word_frequency(text);
    /*for ( auto  &[key , val ] : freq ) {
      cout << key << " " << val << endl;
    }*/

    std::vector<std::pair<std::string, int>> sorted_words(freq.begin(), freq.end());

    std::sort(sorted_words.begin(), sorted_words.end(),
[](const auto& a, const auto& b) {
          if (a.second == b.second) {
            return a.first < b.first;
          }
          return a.second > b.second; });


    for(int i = 0; i <3 ; i++) {
      cout << sorted_words[i].first << "->" << sorted_words[i].second << endl;
    }
}

int main() {

    string text="C++ est rapide, C++ est puissant, C++ est utilisé";

    top_frequent_words(text);


    return 0;
}
