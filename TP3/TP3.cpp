/**
 * Author: Nasreddine El Gourji
 * Created on: 07.02.2025 at 18:27
 * Description: TP3.cpp
 */

//
// Created by nasre on 07.02.2025.
//


// Optional custom header
#include<unistd.h>
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
#include <typeinfo>

// Optional headers (uncomment if needed)
// #include <fstream>    // For file I/O
// #include <thread>     // For multithreading
// #include <queue>      // For queue data structure
// #include <stack>      // For stack data structure

#ifndef EXO
#define EXO 1
#endif
using namespace std;

/*-------------EXO 3-------------*/
constexpr int factorielle(int n){ //pour l'exo 4
    if (n==1){return n;}
    else{
        return n *factorielle(n-1);
    }
}




/*-------------EXO 4-------------*/
int value = 100;

/*-------------EXO 5-------------*/
#define PI 3.14159265

/*-------------EXO 6-------------*/
int safeMultiply(int a, int b) {
    int d = a * b;

    if ((b!=0) and (a>numeric_limits<int>::max()/b || a<numeric_limits<int>::min()/b) ){
        return -1;
    }
    return d;
}


int main() {
    #if EXO == 1
    int tab[10]= {1,2,3,4,5,6,7,8,9,10};
    cout << "Taille totale du tableau :"<<sizeof(tab) << endl;
    cout << "Taille d'un element :"<<sizeof(tab[0]) << endl;
    cout <<"Nombre de elements :"<< sizeof(tab)/sizeof(tab[0]) << endl;

    #elif EXO == 2
    const int tarif_petite_piece= 250 , tarif_grande_piece= 350 , validite=30;
    const float taxe = 0.06;
    int small,large;
    cout << "Number of small rooms: " ;
    cin >> small;
    cout << "Number of large rooms: " ;
    cin >> large;
    cout << "Price per small room: "<<tarif_petite_piece<<"dh"<< endl;
    cout << "Price per large room: "<<tarif_grande_piece<<"dh"<<endl;
    int cost = tarif_petite_piece*small +tarif_grande_piece*large ;
    float cost_tax=taxe*cost;
    cout<<"Cost : "<<cost<<"dh"<<endl;
    cout<<"Tax: "<<cost_tax<<"dh"<<endl;
    cout<<"================================="<<endl;
    float  tot = cost + (cost_tax);
    cout<<"Total estimate: "<<tot<<"dh"<<endl;
    cout<<"This estimate is valid for "<<validite<<" days"<<endl;
    #elif EXO == 3
    constexpr int num = factorielle(5);
    cout<<"Factorielle de 5 est "<<num<<endl;
    #elif EXO == 4
    int value =50;
    cout<<"Value local: "<<value<<endl;
    cout<<"Value globaal: "<<::value<<endl;
    #elif EXO == 5
    const int mois = 12;
    constexpr float  radius = 7.0;
    auto A = PI*pow(radius,2);
    // mois = 11
    cout<<"Nombre de mois dans une année : "<<mois<<endl;
    cout<<"Rayon du cercle : "<<radius<<endl;
    cout<<"Aire du cercle : "<<A<<endl;
    #elif EXO == 6
    int a =1000;
    int b = -30000000;
    int result = safeMultiply(a,b);
    cout<<result<<endl;
    #endif


    return 0;
}
