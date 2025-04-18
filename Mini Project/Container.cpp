/**
 * Author: Nasreddine El Gourji
 * Created on: 14.04.2025 at 14:59
 * Description: Container.cpp
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

#include "Container.h"
using namespace std;




Container::Container(string id , string image , double cpu , double memory ):Ressource(id,cpu,memory),image_(image){};



void Container::start(){
  active_ = true;
}

void Container::stop(){
  active_ = false;
}



string Container::getMetrics() const {
    std::ostringstream oss;
    oss << "[Container: " << id_  <<": "<< cpu_ << " CPU, " << memory_ << " Memory, " << image_<< "]";
    return oss.str();
};

ostream& operator<<(ostream& os, const Container& c) {
  os << c.getMetrics();
  return os;
};


//adding this to use in the KUb...
double Container::getCpu() const {return cpu_;}
double Container::getMemory() const {return memory_;}