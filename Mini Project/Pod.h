//
// Created by nasre on 14.04.2025.
//

#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <bitset>
#include <memory>
#include <string>

#include <algorithm>

#include "Container.h"

using namespace std;

class Pod  {
  private:
    string name_;
    vector<unique_ptr<Container>> containers_;
    unordered_map<string, string> labels_;
  public:
    Pod(string name, unordered_map<string, string> labels={});
    void addContainer(unique_ptr<Container> container);
    bool removeContainer(const string& id );
    void deploy();
    string getMetrics() const;
    friend ostream& operator<<(ostream& os, const Pod& pod);
    const vector<unique_ptr<Container>>& getContainers() const;
    friend class KubernetesCluster;



    //to use in Kub..
    double getTotalCpu() const;
    double getTotalMemory() const;
    string getName() const;
};