/**
 * Author: Nasreddine El Gourji
 * Created on: 03.02.2025 at 16:10
 * Description: TP1.cpp
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






int main() {
    #if EXO == 1
    //EX1:
    cout << "Hello World!" << endl;
    cout << "Bienvenue en C++ !" << endl;


    #elif EXO == 2
    //EX2:

    cout << "Entrer un nombre:" << endl;
    int num;
    cin >> num;
    cout << num << endl;

    #elif EXO == 3
    //EX3:

    int num1,num2,res,dif,produit;
    float quot;
    cout << "entrer les deux numeros:" << endl;
    cin >> num1>>num2 ;
    res= num1*num2;
    produit= num1*num2;
    dif= num1-num2;

    cout << "Somme: "<<res << endl;
    cout << "Difference: "<<dif<< endl;
    cout << "Produit: "<<produit<< endl;
    if (num2!=0) {
        cout << "Produit: "<<produit<< endl;
    }
    else {
        cerr << "imposible de diviser par 0"<< endl;
    }

    #elif EXO == 4
    //EX4:
    std::cout<<"Entrer un numero:";
    int nombre;
    std::cin>>nombre;
    std::cout<<"Vous avez entre: "<<nombre<<std::endl;
    return 0;
    #elif EXO == 5
    //EX5
    cout<<"Entrer une temperature enn Celsius:";
    float num;
    cin>> num;
    float  F =((num*9)/5)+32;
    cout<<"Votre temperature en Fahrenheit: "<<F<<endl;

    #else
    #error "Veuillez entrer un numero entre 1 et 5"
    #endif








    return 0;
}
