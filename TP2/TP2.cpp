/**
 * Author: Nasreddine El Gourji
 * Created on: 03.02.2025 at 17:57
 * Description: TP2.cpp
 */

//
// Created by nasre on 03.02.2025.
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

// Optional headers (uncomment if needed)
// #include <fstream>    // For file I/O
// #include <thread>     // For multithreading
// #include <queue>      // For queue data structure
// #include <stack>      // For stack data structure

using namespace std;

#ifndef EXO
#define EXO 1
#endif




#if EXO ==1
#define PI 3.1415926535897932384626433832795
//#define DEBUG
int main() {
        #ifdef DEBUG
        cout<<"DEBUG is defined"<<endl;
        #endif
        return 0;
    }



#elif EXO ==2
    int main(int argc, char* argv[]) {


        for (int i = 1; i < argc; i++) {
            cout<<"Argument "<<i<<" : "<<argv[i] << endl;
        }
        return 0;

    }


#elif EXO ==3
namespace first {
    int x = 0;
}
namespace second{
    int x =2;
}

int main() {
  cout<< "le premier namespace a comme x : "<<first::x<<endl;
  cout<< "le premier namespace a comme x : "<<second::x<<endl;

}

#elif EXO ==4
int main() {
    int x;
    float y ;
    cout<<"Entrez un nombre entier : ";
    cin>> x ;
    cout<<"Entrez un nombre decimal : ";
    cin>> y;
    cout<<"valeurs saisies "<<x<<" et "<<y<<endl;
}


#endif


