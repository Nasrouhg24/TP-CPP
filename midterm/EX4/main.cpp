/**
 * Author: Nasreddine El Gourji
 * Created on: 24.03.2025 at 16:44
 * Description: main.cpp
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
using namespace std;

int main() {

  auto aliceNom = make_shared<string>("Alice");
  auto aliceCin = make_shared<string>("CIN001");

  Banque mabanque;
  mabanque.ajouterCompte(CompteBancaire(aliceNom, "C001",aliceCin, 1000.0));
  mabanque.ajouterCompte(CompteBancaire(aliceNom, "C002",aliceCin, 500.0));


  auto bobNom = make_shared<string>("Bob");
  auto bobCin = make_shared<string>("CIN002");
  mabanque.ajouterCompte(CompteBancaire(bobNom, "C003",bobCin, 750.0));


  cout <<"Comptes initiaux :"<<endl;
  mabanque.afficherComptes();







  auto compte = mabanque.ChercherCompte("C001");
  if (compte) {
    compte -> deposer(2000.0);
    compte -> retirer(150.0);



  }

  cout<<"Recherche par nom Alice:"<<endl;
  mabanque.afficherComptesParNom("Alice");

  cout<<"Recherche par cin 'CIN001':"<<endl;
  mabanque.afficherComptesParCin("CIN001");


  cout << "Comptes finaux :"<<endl;
  mabanque.suppimerCompte("C001");
  mabanque.afficherComptes();

    return 0;
}
