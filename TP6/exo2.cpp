/**
 * Author: Nasreddine El Gourji
 * Created on: 24.02.2025 at 17:35
 * Description: exo2.cpp
 */

//
// Created by nasre on 24.02.2025.
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
#include <stack>      // For stack data structure

using namespace std;

struct Graph {

    int Ver; //nbr de sommets
    vector<int>* adjList; //matrice



    Graph(int V) {
      Ver = V;
      adjList = new vector<int>[Ver];
    }

    void addEdge(int src, int dst) {
      if(src>=0 && src<Ver && dst>=0 && dst<Ver )
      adjList[src].push_back(dst);
    }




    void freeGraph() {
      delete[] adjList;
    }
};

void DFS(int src, Graph& G) {
  set <int> visited;
  stack<int> stack;

  visited.insert(src);
  stack.push(src);


  while(!stack.empty()) {
    int u = stack.top();
    stack.pop();
    cout << u << " ";

   for(auto v : G.adjList[u]) {
     if(visited.find(v) == visited.end()) {
       stack.push(v);
       visited.insert(v);
     }
   }
  }
}


int main() {
  
    Graph g(5); // Création d'un graphe avec 5 sommets

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);


    DFS(0, g);








    return 0;
}
