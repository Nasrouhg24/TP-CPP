/**
 * Author: Nasreddine El Gourji
 * Created on: 24.02.2025 at 16:34
 * Description: exo1.cpp
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

using namespace std;

void print(int ** matrix, int row, int col){

  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }
}
void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;

}

void transpose(int ** matrix, int row, int col){

  for(int i = 0; i < row; i++) {
    for(int j = 0; j < i; j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
}

int main() {
  // Allocate an array of int* (rows)
  int ** matrixptr = new int*[3];

  // Allocate each row separately
  for(int i = 0; i < 3; i++) {
    matrixptr[i] = new int[3];
  }

  // Fill the matrix
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      matrixptr[i][j] = i*3 + j +1;
    }
  }

 cout<<"matrice initial :"<<endl;
  print(matrixptr, 3, 3);

  transpose(matrixptr, 3, 3);
  cout<<"matrice transposée :"<<endl;
  print(matrixptr, 3, 3);


  // Free memory
  for(int i = 0; i < 3; i++) {
    delete[] matrixptr[i];
  }
  delete[] matrixptr;

  return 0;
}
