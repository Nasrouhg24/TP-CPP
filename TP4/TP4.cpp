/**
 * Author: Nasreddine El Gourji
 * Created on: 15.02.2025 at 15:01
 * Description: TP4.cpp
 */

//
// Created by nasre on 15.02.2025.
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
#include <list>
#include <unordered_set>


// Optional headers (uncomment if needed)
// #include <fstream>    // For file I/O
// #include <thread>     // For multithreading
// #include <queue>      // For queue data structure
// #include <stack>      // For stack data structure






using namespace std;

void put(unordered_map<int, list<pair<int, int>>::iterator>& cache,list<pair<int, int>>& lru,int capacity,int key,int value){

  if(cache.find(key)!=cache.end()){
    lru.erase(cache[key]);//suprimer l'element
  }


  else if(lru.size()==capacity){
    int minkey= lru.back().first;
    cache.erase(minkey);

    lru.pop_back();
  }

  lru.push_front({key,value});
  cache[key]=lru.begin();


}

int get(unordered_map<int, list<pair<int,int>>::iterator>& cache,list<pair<int, int>>& lru,int key){
  if (cache.find(key)!= cache.end()){
    lru.splice(lru.begin(),lru,cache[key]);//deplacer à la tete de la liste
    auto it = cache[key];
    return it->second;
  }
  else{
    return -1;//si la clé n'existe pas
  }
}



void display(const list<pair<int,int>>& lru){
  cout<<"Etat de cache : ";
  for(const auto& it:lru){
    cout<<"("<<it.first<<","<<it.second<<") ";
  }
  cout<<endl;
}

#ifndef EXO
#define EXO 1
#endif

int main() {
  #if EXO == 1
  int C[5]={10,20,30,40,50};
  int sum=0;
  cout<<"Elements : ";
  for(auto i=0;i<5;i++){
    sum+=C[i];
    cout<<C[i]<<" ";
  }
  cout<<endl;
  cout<<"Sum : "<<sum<<endl;

  #elif EXO == 2
  int C[3][3]={{1,2,3},{4,5,6},{7,8,9}};

  int somme=0;
  for(auto i=0;i<3;i++){
    somme+=C[i][i];//les elements de la diagonale se trouve à ala position i,j avec i = j
  }
  cout<<"Somme diagonale : "<<somme<<endl;

  #elif EXO == 3
  array <int,5> a={1,2,3,4,5};
  cout<<"Original : ";
  for(auto it=a.begin();it!=a.end();it++){
    cout<<*it<<" ";
  }
  cout<<endl;
  //to reverse the array we will swap the elements
  int len =a.size();
  int mid = len/2;
  for(auto i =0;i<mid;i++){
    int temp=a[i];
    a[i]=a[len-i-1];
    a[len-i-1]=temp;
  }

  cout<<"Inverse : ";
  for(auto it=a.begin();it!=a.end();it++){
    cout<<*it<<" ";
  }
  cout<<endl;

  #elif EXO == 4
  vector<int> numbers;

  int num;
  cout<<"Entrer des nombres (termine la sequence par un charactere non numerique) : ";
  while(cin>>num){
    numbers.push_back(num);
  }

  cout<<endl;
  cout<<"Double : ";
  for(auto it=numbers.begin();it!=numbers.end();it++){
    cout<<*it * 2<<" ";
  }

  #elif EXO == 5
  list <int> numbers={10,20,30,40,50};
  numbers.push_front(0);//inserer au debut
  numbers.push_back(60);

  cout<<"Apres insertion : ";
  for(auto it=numbers.begin();it!=numbers.end();it++){
    cout<<*it<<" ";
  }

  #elif EXO == 6
  set <int> numbers={5,10,15,20};
  cout<<"Original : ";
  for(auto it=numbers.begin();it!=numbers.end();it++){
    cout<<*it<<" ";
  }
  cout<<endl;
  //insertion d'un 10
  numbers.insert(10);
  cout<<"Apres insertion : ";
  for(auto it=numbers.begin();it!=numbers.end();it++){
    cout<<*it<<" ";
  }

  #elif EXO == 7
  map <int,string> notes={{85,"John"},{90,"Alice"},{78,"Bob"}};

  for(auto& it:notes){
    cout<<it.second<<" : "<<it.first<<endl;
  }
  #elif EXO == 8
  map <string,int> count;
  string s;
  cout<<"Entrer des mots separe par des espaces : ";
  getline(cin,s);
  string cur="";



  //detecter un mot et l'ajouter dans la map
  for(auto i=0;i<s.size();i++){
    if (s[i]!=' '){
      cur+=s[i];

    }
    else{
      if(cur.size()>0){

        count[cur]++;
        cur="";
      }

    }
  }

  //ajouter meme le dernier mot
  if(cur.size()>0){

    count[cur]++;
    cur="";
  }


  //afficher les resultats
  for(auto it:count){
    cout<<it.first<<" : "<<it.second<<endl;
  }

  #elif EXO == 9
  vector<int> numbers={30,10,50,20,40};
  cout<<"Original : ";
  for(auto it=numbers.begin();it!=numbers.end();it++){
    cout<<*it<<" ";
  }
  cout<<endl;

  //apres l avoir trie
  sort(numbers.begin(),numbers.end());
  cout<<"Trie : ";
  for(auto it=numbers.begin();it!=numbers.end();it++){
    cout<<*it<<" ";
  }
  cout<<endl;

  #elif EXO == 10

  set<int> numbers = {100, 4, 200, 1, 3, 2,101,102,103,104,105};
  int max= 0;
  std::set<int>::iterator i, j;
  for(int num:numbers){
    if (!numbers.count(num-1)){
      int cur = num;
      int len = 1;
      while(numbers.count(cur+1)){
        len++;
        cur++;
      }
      if(len >max){
        i = numbers.find(num);
        j = numbers.find(cur);
        max =len;
      }
    }
  }

  cout <<"La plus longue séquence est : "<<max<<" (";
  for(auto it=i;it!=j;it++){
    cout<<*it<<",";
  }
  cout<<*j<<") "<<endl;



  #elif EXO == 11
  int capacity = 2;
  list<pair<int, int>> lru ;
  unordered_map<int, list<pair<int, int>>::iterator> cache;


  // ajouter (1,10) et (2,20)
  put(cache,lru,capacity,1,10);
  put(cache,lru,capacity,2,20);
  display(lru);//afficher

  //Acceder à la clé 1
  cout<<"Acces à la cle 1 : "<<get(cache,lru,1)<<endl;
  display(lru);//affichage



  cout<<"Ajout de (3,30) , suppression de (2,20)"<<endl;
  //ajouter (3,30) => et suppression automatique (2,20)
  put(cache,lru,capacity,3,30);
  display(lru);







  #endif

    return 0;
}
