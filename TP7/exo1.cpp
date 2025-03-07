/**
* Author: Nasreddine El Gourji
 * Created on: 03.03.2025 at 14:49
 * Description: exo1.cpp
 */

//
// Created by nasre on 03.03.2025.
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

class Joueur{
  public:
    string nom;
    int score;
    Joueur(string nom_val="" , int score_val=0);
    void dispaly(){
      cout<<"Joueur: "<<nom<<", Score: "<<score<<endl;
    }
};
Joueur::Joueur(string nom_val, int score_val)
: nom(nom_val), score(score_val){};

int main() {


    //creating the two instances
    Joueur Alice = Joueur("Alice", 1);
    Joueur Bob = Joueur("Bob", 2);

    //displaying them
    Alice.dispaly();
    Bob.dispaly();
    return 0;
}
