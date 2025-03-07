/**
 * Author: Nasreddine El Gourji
 * Created on: 03.03.2025 at 15:53
 * Description: exo6.cpp
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
#include <fstream>    // For file I/O
// #include <thread>     // For multithreading
// #include <queue>      // For queue data structure
// #include <stack>      // For stack data structure
#include <memory>
using namespace std;
class Fichier{
  private:
    unique_ptr<fstream> file;
  public:
    Fichier(const std::string& nomFichier) {
      file = std::make_unique<std::fstream>(nomFichier, std::ios::in);
      if (file->is_open()) {
        std::cout << "Sauvegarde des données... " << std::endl;
      } else {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier : " << nomFichier << std::endl;
      }
    }


    void lecture(){
      std::string contenu;
      if (file->is_open()) {
        cout << "Lecture des données..." << endl;
        cout<<"Contenu du fichier : "<<endl;
        std::string ligne;
        while (std::getline(*file, ligne)) {
          cout << ligne << endl;
        }
      } else {
        std::cerr << "Erreur : Impossible de lire le fichier." << std::endl;
      }
    };
    ~Fichier(){
      if (file && file->is_open()) {
        file->close();
      }
      cout<<"Memoire du flux libérée"<<endl;
    }
};


using namespace std;

int main() {
    Fichier fichier("file.txt");

    fichier.lecture();


    return 0;
}
