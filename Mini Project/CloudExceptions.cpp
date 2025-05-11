/**
 * Author: Nasreddine El Gourji
 * Created on: 05.05.2025 at 14:36
 * Description: CloudExceptions.cpp
 */

//
// Created by nasre on 05.05.2025.
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
#include "CloudExceptions.h"
using namespace std;

// Implémentation de base
CloudExceptions::CloudExceptions(const std::string& msg)
    : std::runtime_error(msg) {}

// Exception d'allocation
AllocationException::AllocationException(const std::string& msg)
    : CloudExceptions("Allocation Error: " + msg) {}

// Exception de fichier
FileException::FileException(const std::string& msg)
    : CloudExceptions("File Error: " + msg) {}


