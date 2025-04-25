/**
 * Author: Nasreddine El Gourji
 * Created on: 25.04.2025 at 23:08
 * Description: exo3.cpp
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

using namespace std;


class StackFullException : public exception {
  public:
    const char* what() const noexcept override{
      return "Error : Stack full";

    }
};
class StackEmptyException : public exception {
  public:
    const char* what() const noexcept override{
      return "Error : Stack empty";
    }
};


class Stack {
  private:
    vector<int> stack;
    int capacity;
  public :
    Stack(int size) {
      capacity = size;
    }
    int size() const {
      return stack.capacity();
    }
    void push(int value) {
      if (stack.size() == capacity) {
        throw StackFullException();
      }
      else {
        stack.push_back(value);
      }
    }
    int pop() {
      if (stack.size() == 0) {
        throw StackEmptyException();
      }
      else {
        stack.pop_back();
        return stack.back();

      }
    }
};

void func_c(Stack& stack) {
  cout << "func_c : adding more than the capacity of stack" << endl;
  stack.push(10);
  cout << "func_c : done" << endl;
}

void func_b(Stack& stack) {
  cout << "func_b : calling func_c " <<endl ;
  func_c(stack);
  cout << "func_b : done" << endl;
}

void func_a(Stack& stack) {
  cout << "func_a : calling func_b " <<endl ;
  func_b(stack);
  cout << "func_a : done" << endl;
}

int main() {
  // Test 1: Démontrer StackFullException via func_a
  try {
    Stack stack(2); // Capacité 2
    stack.push(1);
    stack.push(2);
    std::cout << "Stack size: " << stack.size() << std::endl;
    func_a(stack); // Lève StackFullException
  }
  catch (const StackFullException& ex) {
    std::cerr << "Caught in main: " << ex.what() << std::endl;
  }
  catch (...) {
    std::cerr << "Unknown error occurred" << std::endl;
  }

  // Test 2: Démontrer StackEmptyException avec pop
  try {
    Stack stack(2); // Nouvelle pile vide
    std::cout << "Stack size: " << stack.size() << std::endl;
    stack.pop(); // Lève StackEmptyException
  }
  catch (const StackEmptyException& ex) {
    std::cerr << "Caught in main: " << ex.what() << std::endl;
  }
  catch (...) {
    std::cerr << "Unknown error occurred" << std::endl;
  }

  std::cout << "Program completed" << std::endl;
  return 0;
}
