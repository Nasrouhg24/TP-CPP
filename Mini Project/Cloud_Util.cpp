/**
 * Author: Nasreddine El Gourji
 * Created on: 14.04.2025 at 17:10
 * Description: Cloud_Util.cpp
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
#include <fstream>
#include "Cloud_Util.h"
#include "CloudExceptions.h"
using namespace std;

void display(const KubernetesCluster& cluster){
  cout << cluster;
}
void deployPods(KubernetesCluster& cluster,vector<unique_ptr<Pod>>& pods){
  for (auto& pod : pods) {
    try {
        cluster.deployPod(std::move(pod));}
    catch (AllocationException& ex) {
      cerr<<ex.what()<<endl;
    }
  }
    pods.clear();
}
void saveClusterMetrics(const KubernetesCluster& cluster, const std::string& filename){
  ofstream out(filename);
  if (out.is_open()) {
    out << cluster.getMetrics() << endl;

  }
  else {
    string msg = "FileException : Could not open file " + filename + " for writing.";
    throw FileException(msg);
  }
};


void forEachContainer(const KubernetesCluster& cluster, const std::function<void(const Container&)>& func){
  for (auto& pod : cluster.getPods()) {
	for (auto& container : pod->getContainers()) {
          func(*container);
	}
  }
}


