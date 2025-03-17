/**
 * Author: Nasreddine El Gourji
 * Created on: 17.03.2025 at 14:47
 * Description: Movie.cpp
 */

//
// Created by nasre on 17.03.2025.
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

using namespace std;


#include "Movie.h"


string Movie::getName(){
    return name;
}
string Movie::getRating(){
    return rating;
}
int Movie::getWatched(){
    return watched;
}
void Movie::setName(string name_val){
    name = name_val;
}
void Movie::setRating(string rating_val){
    rating = rating_val;
}
void Movie::setWatched(int watched_val){
    watched = watched_val;
}

void Movie::display(){
    cout << name << ", " << rating << ", " << watched << endl;
}
void Movie::incrementWatched(){
    watched++;

}

Movie::Movie(string name_val,string rating_val, int watched_val):name(name_val),rating(rating_val),watched(watched_val){};





