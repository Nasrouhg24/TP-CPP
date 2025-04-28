/**
 * Author: Nasreddine El Gourji
 * Created on: 28.04.2025 at 16:36
 * Description: exo2.cpp
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

#include <iomanip>
#include <sstream>
#include <fstream>



using namespace std;

int main() {
  ifstream infile("data.txt");
  ofstream outfile("report.txt");

  if (!infile || !outfile) {
    cerr << "Error opening files" << endl;
    return 1;
  }

  outfile << setw(20)<<left <<"Nom" << setw(10) <<"Âge"<<setw(15)<<"Salaire" << endl;

  string line;
  string nom;
  int age ;
  double salaire;
  while (getline(infile, line)) {
    istringstream iss(line);
    if ((iss >> nom >> age >> salaire)) {
      outfile << fixed <<setprecision(2)<<
      setw(20)<<left<<nom <<setw(10)<<age
      <<setw(15)<<salaire<<endl;
    }
  }
  infile.close();
  outfile.close();
  cout << "Rapport généré dans report.txt" << endl;

    return 0;
}
