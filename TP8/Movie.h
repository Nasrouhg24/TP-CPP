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

#ifndef MOVIE_H
#define MOVIE_H

class Movie{
private:
    string name;
    string rating;
    int watched;
public:



    friend class Movies;
    string getName();
    string getRating();
    int getWatched();
    void setName(string name_val);
    void setRating(string rating_val);
    void setWatched(int watched_val);
    void display();
    void incrementWatched();
    Movie(string name_val="", string rating_val="PG", int watched_val=0);


};

#endif //MOVIE_H


