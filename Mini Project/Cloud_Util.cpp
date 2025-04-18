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
#include "Cloud_Util.h"
using namespace std;

void display(const KubernetesCluster& cluster){
  cout << cluster;
}
void deployPods(KubernetesCluster& cluster,vector<unique_ptr<Pod>>& pods){
  for (auto& pod : pods) {
        cluster.deployPod(std::move(pod));
  }
    pods.clear();
}


