/**
 * Author: Nasreddine El Gourji
 * Created on: 28.04.2025 at 16:46
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
#include <fstream>
#include <sstream>


int main() {
  string keyword;
  cout << "Enter the keyword : ";
  getline(cin, keyword);

  ifstream infile("input_exo3.txt");
  ofstream outfile("output_exo3.txt");

  if (!infile.is_open() || !outfile.is_open()) {
    cerr << "Impossible d'accèder aux files" << endl;
    return 1;
  }

  string line;
  while (getline(infile, line)) {
    if(line.find(keyword) != string::npos) {
      outfile << line << endl;
    }
  }
  infile.close();
  outfile.close();
  cout <<"FINISHED"<<endl;
    return 0;
}
