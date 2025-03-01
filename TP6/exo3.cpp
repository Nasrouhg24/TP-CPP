/**
 * Author: Nasreddine El Gourji
 * Created on: 24.02.2025 at 18:04
 * Description: exo3.cpp
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

struct Node {
  int data;
  Node* right;
  Node* left;

  Node(int val){
    data = val;
    left = nullptr;
    right = nullptr;
  }

};




Node* insert(Node* root, int val){
  if(root == nullptr){
    return new Node(val);
  }
  if(val < root->data){
    root->left = insert(root->left, val);
  }
  else{
    root->right = insert(root->right, val);
  }
  return root;

}


bool search(Node* root, int val){
    if (root == nullptr){
      return false;
    }
    if(val == root->data){
      return true;
    }
    else if(val < root->data){
      return search(root->left, val);
    }
    return search(root->right, val);
}

Node* minimum(Node* root){
  Node* current = root;
  while(current->left != nullptr){
    current = current->left;
  }
  return current;
};

Node* deleteNode(Node* root, int val){
  if(root == nullptr){
    return nullptr;
  }


  if (val < root->data){
    root->left = deleteNode(root->left, val);
  }
  else if(val > root->data){
    root->right = deleteNode(root->right, val);
  }
  else{
    if(root->left == nullptr && root->right == nullptr){
      delete root;
      return nullptr;
    }

    else if(root->left == nullptr){
      Node* temp = root;
      root = root->right;
      delete temp;

    }
    else if(root->right == nullptr){
      Node* temp = root;
      root = root->left;
      delete temp;
    }

    else{
      Node* temp = minimum(root->right);
      root->data = temp->data;
      root->right = deleteNode(root->right, temp->data);

    }
  }
  return root;
}


void infix(Node* root){
  if(root == nullptr){
    return;
  }
  infix(root->left);
  cout << root->data << " ";
  infix(root->right);
}


int main() {
  Node* root = nullptr;


  cout << "Insertion de : 10 5 20 3 7 15 25 "<<endl;
  //inserer les elements
  root = insert(root, 10);
  root = insert(root, 5);
  root = insert(root, 20);
  root = insert(root, 3);
  root = insert(root, 7);
  root = insert(root, 15);
  root = insert(root, 25);


  //impression du parcours
  cout << "Parcours infixe :";
  infix(root);
  cout << endl;


  //chercher si 3 y est
  cout <<"Recherche de 20 :";
  cout << search(root, 20) << endl;

  cout << "Suppression de 20" << endl;
  deleteNode(root, 20);



  cout << "Parcours infixe après suppression de 20 :";
  infix(root);



    return 0;
}
