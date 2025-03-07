/**
 * Author: Nasreddine El Gourji
 * Created on: 03.03.2025 at 16:16
 * Description: exo7.cpp
 */

//
// Created by nasre on 03.03.2025.
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

class SharedPtr{

  public:
    int* count ;
    int*  num;
    SharedPtr(int num_val=0){
        num = new int(num_val);
        count = new int(1);
        cout << "Création d'un SharedPtr vers " << *num << endl;
        cout << "Nombre de références : " << *count << endl;
    };


    SharedPtr (const SharedPtr &ptr1){
      num = ptr1.num;
      count = ptr1.count;
      (*count)++;
      cout<<"Création d'une copie"<<endl;
      cout <<"Nombres de références : " << *count << endl;
    };

    ~SharedPtr(){
      if (count) {
        (*count)--;
        cout << "Destruction d'un SharedPtr" << endl;

        if (*count == 0) {
          delete num;
          delete count;
          cout << "Objet supprimé" << endl;
        } else {
          cout << "Nombre de références : " << *count << endl;
        }
      }
    };

};


int main() {
  
    SharedPtr ptr1(10);
    {
      SharedPtr ptr2(ptr1);

    }


    return 0;
}
