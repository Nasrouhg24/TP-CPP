/**
 * Author: Nasreddine El Gourji
 * Created on: 25.04.2025 at 22:32
 * Description: exo1.cpp
 */

//
// Created by nasre on 25.04.2025.
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

#include <exception>


using namespace std;

class DivideByZeroException : public exception{
  public :
    const char* what() const noexcept override{
      return "Divide by zero";
    }
};


class InvalidOperationException : public exception{
  public :
    const char* what() const noexcept override{
      return "Invalid operation";
    }
};



double calculate(double num1, double num2, char operation){
  if(operation == '+'){
    return num1 + num2;
  }
  else if(operation == '-'){
    return num1 - num2;
  }
  else if(operation == '*'){
    return num1 * num2;
  }
  else if(operation == '/'){
    if (num2 == 0){
      throw DivideByZeroException();
    }
    return num1 / num2;
  }
  else {
    throw InvalidOperationException();
  }
};

int main() {
  double num1, num2;
  char operation;
  std::cout << "Enter first number: ";
  std::cin >> num1;
  std::cout << "Enter second number: ";
  std::cin >> num2;
  std::cout << "Enter operation (+,-,*,/): ";
  std::cin >> operation;
  try {
    double result = calculate(num1, num2, operation);
    std::cout << "Result:" << result << std::endl;
  }
  catch (const DivideByZeroException& ex) {
    std::cerr << ex.what() << std::endl;
  }
  catch (const InvalidOperationException& ex) {
    std::cerr << ex.what() << std::endl;
  }
  catch (...) {
    std::cerr << "Unknown error occurred" << std::endl;
  }
  std::cout << "Program completed" << std::endl;
  return 0;
}
