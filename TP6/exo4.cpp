/**
 * Author: Nasreddine El Gourji
 * Created on: 24.02.2025 at 21:45
 * Description: exo4.cpp
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
// #include <stack>      // For stack data structure


#include <memory>
using namespace std;

struct MemoryBlock {
    size_t size;

    // Constructeur
    MemoryBlock(size_t s) : size(s) {
        std::cout << "Bloc de mémoire alloué de " << size << " unités." << std::endl;
    }

    // Destructeur
    ~MemoryBlock() {
        std::cout << "Libération de la mémoire." << std::endl;
    }
};

unique_ptr<MemoryBlock> merge(unique_ptr<MemoryBlock> a, unique_ptr<MemoryBlock> b) {
  if (!a || !b) {
    return nullptr;
  }

  size_t size = a->size + b->size;
  cout<<"Fusion des deux blocs : "<<size<<" unités."<<endl;
  return make_unique<MemoryBlock>(size);
};



int main() {


  unique_ptr<MemoryBlock> a = make_unique<MemoryBlock>(100);
  unique_ptr<MemoryBlock> b = make_unique<MemoryBlock>(200);

  unique_ptr<MemoryBlock> c = merge( move(a), move(b));

    return 0;
}
