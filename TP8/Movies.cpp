/**
 * Author: Nasreddine El Gourji
 * Created on: 17.03.2025 at 14:48
 * Description: Movies.cpp
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
#include "Movies.h"
#include "Movie.h"

bool Movies::add_movie(string name,string rating,int watched){
  if (movies.find(name) !=movies.end()){

    return false;
  }
  else{
    movies[name]= Movie(name,rating,watched);
    return true;
   }

};

bool Movies::increment_watched(string name){
  if (movies.find(name) !=movies.end()){
    movies[name].incrementWatched();
    return true;
  }
  else{
    return false;
  }
};


void Movies::display(){
  if (movies.size() == 0){
    cout<<"Désolé,aucun film à afficher"<<endl;
  }
  else{
    for (auto it = movies.begin(); it != movies.end(); it++){
      cout << it->second.getName()<<", "<<it->second.getRating()<<", "<<it->second.getWatched()<<endl;
    }
  }

};



