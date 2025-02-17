/**
 * Author: Nasreddine El Gourji
 * Created on: 17.02.2025 at 17:57
 * Description: exo6.cpp
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

#include <regex>
using namespace std;
void contains_email(const std::string& text){
    regex email_pattern(R"((\w+[\.\w]*)@(\w+\.\w+))");
    smatch matches;
    if (regex_search(text, matches, email_pattern)){
      cout<<"Found mail : "<<matches[0];

    }
    else{
      cout<<"No mail found";
    }
}
int main() {

    string text="Mon email est user@example.com plopa,oipx,io@example.com";
    contains_email(text);
    return 0;
}
