/**
 * Author: Nasreddine El Gourji
 * Created on: 24.03.2025 at 15:54
 * Description: CompteBancaire.cpp
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
#include "CompteBancaire.h"
#include <memory>

using namespace std;

CompteBancaire::CompteBancaire(shared_ptr<string> nom , string numero ,shared_ptr<string> cinValue,double soldeInitial =100){

  if (soldeInitial >= 0){
    nomProprietaire = make_shared<string>(*nom);
    numeroCompte = make_unique<string>(numero);
    cin = make_shared<string>(*cinValue);
    solde = soldeInitial;
  }
  else{
    cout << "Le solde initial doit etre positif" << endl;
  }

};

void CompteBancaire::deposer(double montant){
  if (montant >= 0){
    solde += montant;
  }
  else{
    cout << "Le montant doit etre positif" << endl;
  }
};
bool CompteBancaire::retirer(double montant){
  if (montant >= 0 && montant <= solde){
    solde -= montant;
    return true;
  }
  cout << "Le montant doit etre positif et inferieur au solde" << endl;
  return false;

};

void CompteBancaire::afficher() const{
  cout << "Nom du proprietaire : " << *nomProprietaire<<", ";
  cout <<"CIN: " << *cin << ", ";
  cout <<"Numero: " << *numeroCompte << ", ";
  cout <<"Solde: " << solde <<"MAD"<< endl;
};



