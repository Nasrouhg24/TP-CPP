/**
 * Author: Nasreddine El Gourji
 * Created on: 03.03.2025 at 15:41
 * Description: exo5.cpp
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

class Etudiant{
  public:
    string nom;
    vector<int>* notes;
    Etudiant(string nom_val="", vector<int>* notes_val= nullptr);
    float moyenne(){
      float moyenne=0;
      for (auto it = notes->begin(); it != notes->end(); it++){
        moyenne+=*it;
      }
      return moyenne/notes->size();
    }

    void display(){
      cout<<"Nom: "<<nom<<endl;
      cout<<"Notes: ";
      for (auto it = notes->begin(); it != notes->end(); it++){
        cout<<*it<<" ";
      }
      cout<<endl;
      cout<<"Moyenne: "<<moyenne();
    }
};

Etudiant::Etudiant(string nom_val,vector<int>* notes_val)
    :nom(nom_val),notes(notes_val){}



int main() {
    //initialisation d'une instance etudiant
    vector<int>* notes = new vector<int>{15,18,12};
    Etudiant* etudiant=new Etudiant("Karim",notes);


    etudiant->display();


    return 0;
}
