/**
 * Author: Nasreddine El Gourji
 * Created on: 03.03.2025 at 14:49
 * Description: exo2.cpp
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
  private:
    string mdp;
  public:
    string nom;
    int score;
    Joueur(string nom_val ="", int score_val=0,string mdp_val="");
    ~Joueur(){
      cout<<"Objet dynamique supprimé"<<endl;
    };


};

Joueur::Joueur(string nom_val,int score_val,string mdp_val)
:nom(nom_val),score(score_val),mdp(mdp_val){};

int main() {
  
    Joueur* joueur= new Joueur("Alice",100,"123456");

    //impossible d'executer le code suivant puisque le mot de pass car c'est  privé
    //cout<<"Mot de passe:"<<joueur->mdp<<endl;

    //acces à celà
    cout<<"Nom : "<<joueur->nom<<endl;
    cout<<"Score : "<<joueur->score<<endl;
    //suppression du joueur
    delete joueur;





    return 0;
}
