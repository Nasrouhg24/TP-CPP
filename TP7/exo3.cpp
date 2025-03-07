/**
 * Author: Nasreddine El Gourji
 * Created on: 03.03.2025 at 15:15
 * Description: exo3.cpp
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
    ~Joueur(){
      cout<<"Destructeur appelé"<<endl;
    }
};
Joueur::Joueur(string nom_val, int score_val)
: nom(nom_val), score(score_val){
        cout<<"Constructeur appelé"<<endl;
};


int main() {
  //création du joueur
  Joueur joueur("Alice", 100);

  joueur.dispaly();

  //destruction automatique lors du fin de programme
    return 0;
}
