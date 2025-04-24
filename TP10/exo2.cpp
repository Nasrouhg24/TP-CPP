/**
 * Author: Nasreddine El Gourji
 * Created on: 21.04.2025 at 18:02
 * Description: exo2.cpp
 */

//
// Created by nasre on 21.04.2025.
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


template<typename T >
class Conteneur {
  private:
    vector<T> conteuneur_;
    int size_;
  public:
    Conteneur(int s) : size_(s) {}
    void ajouter(const T& e) {
      if (conteuneur_.size() >= size_) {
        cerr << "Capacité dépassé" << endl;
      }
      else {
        conteuneur_.push_back(e);
      }
    }



    T obtenir(int i ){
      return conteuneur_[i];
    }
};




int main() {
  Conteneur<int> c1(3); // Capacité de 3
  c1.ajouter(10);
  c1.ajouter(20);
  c1.ajouter(30);
  c1.ajouter(40); // Capacité dépassée
  std::cout << c1.obtenir(0) << " " << c1.obtenir(1) << std::endl; // Affiche 10 20
  Conteneur<std::string> c2(2);
  c2.ajouter("Bonjour");
  c2.ajouter("Monde");
  std::cout << c2.obtenir(0) << " " << c2.obtenir(1) << std::endl; // Affiche Bonjour Monde
  return 0;

    return 0;
}
