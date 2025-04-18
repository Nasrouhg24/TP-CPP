/**
 * Author: Nasreddine El Gourji
 * Created on: 14.04.2025 at 15:19
 * Description: Pod.cpp
 */

//
// Created by nasre on 14.04.2025.
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
#include "Pod.h"
using namespace std;




//erreur si j appelle pas le constructeur Ressource
Pod::Pod(string name, unordered_map<string, string> labels):name_(name),labels_(labels){};


void Pod::addContainer(unique_ptr<Container> container){
  //unique ptr so i need to move it
  containers_.push_back(std::move(container));
};

bool Pod::removeContainer(const string& id){
  for (auto it = containers_.begin(); it != containers_.end(); it++){
    if ((*it)->id_ == id){
      containers_.erase(it);
      return true;
    }
  }

  return false;
}

void Pod::deploy(){
  for (auto it = containers_.begin(); it != containers_.end(); it++){
    (*it)->start();
  }
}
//needs a modif
string Pod::getMetrics() const {
  ostringstream oss;
  oss << "[Pod: " << name_ << "]" <<endl;
  for (const auto& container : containers_) {
       oss<< (*container) << "\n";
  }
  return oss.str();
};


ostream& operator<<(ostream& os, const Pod& pod){
   os << pod.getMetrics();
    return os;
}

const vector<unique_ptr<Container>>& Pod::getContainers() const {
  return containers_;
}



double Pod::getTotalCpu() const {
    double total = 0.0;
    for (const auto& container : containers_) {
        total += container->getCpu();
    }
    return total;
}


double Pod::getTotalMemory() const {
    double total = 0.0;
    for (const auto& container : containers_) {
        total += container->getMemory();
    }
    return total;
}