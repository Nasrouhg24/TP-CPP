/**
 * Author: Nasreddine El Gourji
 * Created on: 28.04.2025 at 17:47
 * Description: exo4.cpp
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

class Livre {

  public:
    int pages ;
    string name ;
    Livre(int pages, string name): pages(pages), name(name) {}
    friend ostream& operator<<(ostream& os, const Livre& l) ;

};

std::ostream& operator<<(ostream& os, const Livre& l) {
  os << l.name << " - " << l.pages<<" pages";
  return os;
};


int main() {
  Livre l1 = Livre(350, "C++ Moderne");
  Livre l2 = Livre(500, "Apprendre Python");
  Livre l3 = Livre(450, "Algorithmique");

  vector<Livre> v1 = {l1,l2,l3};

  cout << "A partir des livres : " << endl;
  for (vector<Livre>::iterator i = v1.begin(); i != v1.end(); i++) {
    cout << *i << endl;
  }
  cout << endl;

  sort(v1.begin(), v1.end(),[](const Livre& l1, const Livre& l2) {
    return l1.name < l2.name;
  });

  cout << "Tri par Titre :" << endl;
  for (vector<Livre>::iterator i = v1.begin(); i != v1.end(); i++) {
    cout << *i << endl;
  }
  cout << endl;


  sort(v1.begin(), v1.end(),[](const Livre& l1, const Livre& l2) {
    return l1.pages > l2.pages;
  });


  cout << "Tri par nombre de pages décroissant : " << endl;
  for (vector<Livre>::iterator i = v1.begin(); i != v1.end(); i++) {
    cout << *i << endl;
  }
  cout << endl;

  

    return 0;
}
