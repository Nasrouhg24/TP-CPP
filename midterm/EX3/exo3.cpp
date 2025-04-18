/**
 * Author: Nasreddine El Gourji
 * Created on: 24.03.2025 at 15:33
 * Description: exo3.cpp
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

using namespace std;

vector<vector<string>> organiserEtudiants(vector<string> etudiants,string etalon){
  vector<vector<string>> resultat;
  vector<string> groupe;
  set<string> etudiantsSet;
  for(auto etudiant:etudiants){
    etudiantsSet.insert(etudiant);
  }
  for(auto etudiant:etudiantsSet){
    if (groupe.size()<3){
      groupe.push_back(etudiant);
    }
    else{
      resultat.push_back(groupe);
      groupe.clear();
      groupe.push_back(etudiant);
    }
  }
  if (groupe.size()<3){
    for(int i =0;i<(3-groupe.size()+1);i++){
      groupe.push_back(etalon);
    }
    resultat.push_back(groupe);
  }
  return resultat;
};



void afficherGroupes(vector<vector<string>> groupes){
  cout <<"Groupes d'étudiants (3 par groupe) :"<<endl;

  for(int i= 0;i< groupes.size();i++){
    for(auto etudiant:groupes[i]){
      cout<<etudiant<<" ";
    }
    cout<<endl;
  }
}

int main() {
    vector<string> etudiants= {"Ali","Fatima" ,"Yassine","Omar","Khadija","Amina","Yassine","Ali","Rachid","Sofia","Hassan","Kamal"};
    string etalon="Inconnu";
    vector<vector<string>> groupes= organiserEtudiants(etudiants,etalon);

    afficherGroupes(groupes);

    return 0;
}
