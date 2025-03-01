/**
 * Author: Nasreddine El Gourji
 * Created on: 25.02.2025 at 11:30
 * Description: exo5.cpp
 */

//
// Created by nasre on 25.02.2025.
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


#include <list>
#include <memory>
using namespace std;


struct Node {
    int key;
    int value;
    Node(int k, int v) : key(k), value(v) {}
};

struct LRUCache {
    int capacity;
    list<shared_ptr<Node>> cacheList; // Liste pour maintenir l'ordre d'utilisation
    unordered_map<int, pair<std::shared_ptr<Node>, list<std::shared_ptr<Node>>::iterator>> cacheMap;

    LRUCache(int cap) : capacity(cap) {}

    int get(int key) {
        if (cacheMap.find(key) == cacheMap.end()) {
            cout << "Clé " << key << " non trouvée\n";
            return -1; // Retourner -1 si la clé n'est pas trouvée
        }

        // Récupérer l'élément et le déplacer en tête (utilisation récente)
        auto node = cacheMap[key].first;
        cacheList.erase(cacheMap[key].second);
        cacheList.push_front(node);
        cacheMap[key].second = cacheList.begin();

        return node->value;
    }

    void put(int key, int value) {
        if (cacheMap.find(key) != cacheMap.end()) {
            // Mise à jour de la valeur existante
            auto node = cacheMap[key].first;
            node->value = value;

            // Déplacer en tête (MRU - Most Recently Used)
            cacheList.erase(cacheMap[key].second);
            cacheList.push_front(node);
            cacheMap[key].second = cacheList.begin();
            return;
        }

        // Si la capacité est atteinte, supprimer le LRU (Least Recently Used)
        if (cacheList.size() >= capacity) {
            auto lru = cacheList.back();
            cout << "Accès à la clé " << key << " -> Éviction de la clé " << lru->key << "\n";
            cacheMap.erase(lru->key);
            cacheList.pop_back();
        }

        // Ajouter un nouvel élément
        auto newNode = make_shared<Node>(key, value);
        cacheList.push_front(newNode);
        cacheMap[key] = {newNode, cacheList.begin()};
    }

    void display() {
        cout << "Cache actuel :\n";
        for (const auto& node : cacheList) {
            cout << node->key << " ";
        }
        cout << "\n";
    }
};


int main() {

    LRUCache cache(4);  // Capacité du cache : 4

    // Accès aux clés et insertion dans le cache
    cache.put(1, 10);
    cache.put(2, 20);
    cache.put(3, 30);
    cache.put(4, 40);

    // Affichage du cache après ces insertions
    cache.display();

    // Accès à la clé 1 (devenant le plus récemment utilisé)
    cache.get(1);
    cache.display();

    // Insertion de la clé 5 (qui devrait évincer la clé 2)
    cache.put(5, 50);
    cache.display();


    return 0;
}
