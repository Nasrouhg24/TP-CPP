/**
 * Author: Nasreddine El Gourji
 * Created on: 25.04.2025 at 22:49
 * Description: exo2.cpp
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

class NegativeQuantityException: public exception{
  public:
    const char* what() const noexcept override{
        return "Error : trying to retrieve a negative quantity .";
    }
};

class InsufficientStockException : public exception{
  public:
    const char* what() const noexcept override{
      return "Error : trying to retrieve items more than the stock quantity.";

    }
};


class Inventory {
  private:
    int stockQuantity;
  public:
    Inventory(int quantity):stockQuantity(quantity){};
    int get_stock(){
      return stockQuantity;
    };
    void add_items(int quantity){
      if (quantity < 0){
        throw NegativeQuantityException();
      }
      else{
        stockQuantity += quantity;
      }
    }

    void remove_items(int quantity){
      if (quantity > stockQuantity){
        throw InsufficientStockException();
      }
      else{
        stockQuantity -= quantity;
      }
    }

};

int main() {
  // Test 1: Initialisation et ajout d'articles
  Inventory inv(100); // Initial stock of 100 items
  std::cout << "Initial stock: " << inv.get_stock() << std::endl;

  try {
    inv.add_items(50);
    std::cout << "After adding 50 items: " << inv.get_stock() << std::endl;
  }
  catch (const NegativeQuantityException& ex) {
    std::cerr << ex.what() << std::endl;
  }
  catch (...) {
    std::cerr << "Unknown error occurred" << std::endl;
  }

  // Test 2: Tentative de retrait excessif
  try {
    inv.remove_items(160); // Should throw InsufficientStockException
    std::cout << "After removing 160 items: " << inv.get_stock() << std::endl;
  }
  catch (const InsufficientStockException& ex) {
    std::cerr << ex.what() << std::endl;
  }
  catch (...) {
    std::cerr << "Unknown error occurred" << std::endl;
  }

  // Test 3: Tentative d'ajout d'une quantité négative
  try {
    inv.add_items(-10); // Should throw NegativeQuantityException
    std::cout << "After adding -10 items: " << inv.get_stock() << std::endl;
  }
  catch (const NegativeQuantityException& ex) {
    std::cerr << ex.what() << std::endl;
  }
  catch (...) {
    std::cerr << "Unknown error occurred" << std::endl;
  }

  std::cout << "Program completed" << std::endl;
  return 0;
}
