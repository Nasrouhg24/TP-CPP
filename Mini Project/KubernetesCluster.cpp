/**
 * Author: Nasreddine El Gourji
 * Created on: 14.04.2025 at 16:48
 * Description: KubernetesCluster.cpp
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
#include "KubernetesCluster.h"
using namespace std;

void KubernetesCluster::addNode(shared_ptr<Server> node){
  if(node!=nullptr){
    nodes_.push_back(node);
  }
};

bool KubernetesCluster::removePod(const string& name){
  for (auto it = pods_.begin(); it != pods_.end(); it++) {
    if ((*it)->name_ == name) {
      pods_.erase(it);
      return true;
    }
  }
  return false;
}


void KubernetesCluster::deployPod(std::unique_ptr<Pod> pod) {



 	if (schedulePod(*pod)) {
        cout << "-> Déploiement du Pod " << *pod ;
        pod->deploy();
        cout << "Pod " << *pod << "déployé avec succès.\n";
        pods_.push_back(std::move(pod));
    } else {
        cout << "Échec du déploiement du pod " << *pod << ": ressources insuffisantes.\n";
    }
}


bool KubernetesCluster::schedulePod(Pod& pod){
  double sum_cpu = pod.getTotalCpu();
  double sum_memory = pod.getTotalMemory();


  for (auto& node : nodes_) {
        if (node->allocate(sum_cpu, sum_memory)) {
            return true;
        }
    }
    return false;
}


Pod* KubernetesCluster::getPod(const string& name){
  for (auto it = pods_.begin(); it != pods_.end(); it++) {
    if ((*it)->name_ == name) {
      return it->get();
    }
  }
  return nullptr;
}

string KubernetesCluster::getMetrics() const {
  std::ostringstream oss;
  oss << "=== Cluster Metrics ===" << endl;


  for (const auto& node : nodes_) {
    oss << (*node) << endl;
  }


  for (const auto& pod : pods_) {
  	oss << *pod << endl;
  }
  return oss.str();

}

ostream& operator<<(ostream& os, const KubernetesCluster& c){
  os << c.getMetrics() << endl;
  return os;
}