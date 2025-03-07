/**
 * Author: Nasreddine El Gourji
 * Created on: 03.03.2025 at 15:19
 * Description: exo4.cpp
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
#include <memory>
using namespace std;
class Object{
  public:
    string nom ;
    int quantite;
    Object(string nom_val="", int quant_val=0);


};
Object::Object(string nom_val, int quantite_val):nom(nom_val),quantite(quantite_val){
  cout<<"Ajout de "<<nom <<"(x"<<quantite<<")"<<endl;
}

class Inventaire{
  public:
    vector<Object*> objects;

    void addObject(Object* object){
      objects.push_back(object);
    };
    void removeObject(Object* object){
      auto it = find(objects.begin(), objects.end(), object);
      if (it != objects.end()){
        objects.erase(it);
      }
      else{
        cout<<"Object not found"<<endl;
      }
    }
    void display(){
      cout<<"Inventaire :"<<endl;
      for (auto it = objects.begin(); it != objects.end(); it++){
        cout<<"- "<<(*it)->nom<<" (x"<<(*it)->quantite<<")"<<endl;
      }
    }

    ~Inventaire(){
      cout<<"Mémoire de l'inventaire libérée"<<endl;
    }
};
int main() {
    //creation de l'inventaire
    Inventaire* inventaire=new Inventaire();

    //creation des deux objects
    Object *obj1=new Object("Pomme",3);
    Object *obj2=new Object("Epee",1);

    //ajouter les objets aux inventaires
    inventaire->addObject(obj1);
    inventaire->addObject(obj2);

    //displaying l'inventaire
    inventaire->display();

    //destruction de l'inventaire
    delete inventaire;



    return 0;
}
