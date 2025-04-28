/**
 * Author: Nasreddine El Gourji
 * Created on: 28.04.2025 at 16:20
 * Description: exo1.cpp
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

#include <fstream>
#include <iomanip>
using namespace std;

int main() {
   ofstream outfile("output.txt");

   if (!outfile.is_open()) {
     cerr << "impossible d'accéder au fichier" << endl;
     return 1;
   }

   double num ;
   cout << "Entrer des nombres flottants (entrez une waleur non numerique  pour arrêter) : "<<endl;
   while (cin >> num) {
     outfile << setprecision(2)<<setw(10) <<left << num << endl;
   }

   outfile.close();
   cout <<"Nombres enregistrés dans output.txt"<<endl;
  return 0;
}
