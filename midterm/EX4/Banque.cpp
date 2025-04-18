/**
 * Author: Nasreddine El Gourji
 * Created on: 24.03.2025 at 16:14
 * Description: Banque.cpp
 */

//
// Created by nasre on 24.03.2025.
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
#include "Banque.h"
#include "CompteBancaire.h"
#include <memory>

using namespace std;
CompteBancaire*  Banque::ChercherCompte(const string& numero){
  for (int i = 0; i < comptes.size(); i++) {
    if (*(comptes[i].numeroCompte) == numero){
      return &comptes[i];

    }
  }
  return nullptr;

}


void Banque::ajouterCompte(CompteBancaire&& compte){
  comptes.push_back(move(compte));
}


void Banque::suppimerCompte(const string& numero){


  for (int i = 0; i < comptes.size(); i++) {
    if (*(comptes[i].numeroCompte) == numero){
      comptes.erase(comptes.begin()+i);
      cout <<"Compte "<<numero<<" supprimé avec succés"<<endl;

    }
  }
};

void Banque::afficherComptes() const {
  for (auto& compte : this->comptes) {
    compte.afficher();
  }
}

void Banque::afficherComptesParNom(const string& nom) const {
  for (auto& compte : this->comptes) {
    if (*(compte.nomProprietaire) == nom){
      compte.afficher();
    }
  }
}

void Banque::afficherComptesParCin(const string& cin) const {
  for (auto& compte : this->comptes) {
    if (*(compte.cin) == cin){
      compte.afficher();
    }
  }
}


