//
// Created by nasre on 17.03.2025.
//
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
using namespace std;
#include "Movie.h"


#ifndef MOVIES_H
#define MOVIES_H

class Movies{
public:
    map<string,Movie> movies;
    bool add_movie(string name,string rating,int watched);
    bool increment_watched(string name);
    void display();
};


#endif //MOVIES_H



