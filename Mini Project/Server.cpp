/**
 * Author: Nasreddine El Gourji
 * Created on: 14.04.2025 at 16:26
 * Description: Server.cpp
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
#include "Server.h"
using namespace std;

Server::Server(string id, double cpu,double memory):Ressource(id,cpu,memory),available_cpu_(cpu),available_memory_(memory){};



bool Server::allocate(double cpu,double memory){
  if (cpu <= available_cpu_ && memory <= available_memory_) {
    available_cpu_ -= cpu;
    available_memory_ -= memory;
    return true;
  }
  return false;
}

void Server::start() {
    active_ = true;
}


void Server::stop() {
    active_ = false;
}


string Server::getMetrics() const {
    std::ostringstream oss;
    oss << "[Server: " << id_ << ": " << cpu_ << " CPU, " << memory_ << " Memory, Available: " <<available_cpu_<<" CPU, "<<available_memory_<<" Memory]";
    return oss.str();
};


ostream& operator<<(ostream& os, const Server& server){
  os << server.getMetrics();
  return os;
}
