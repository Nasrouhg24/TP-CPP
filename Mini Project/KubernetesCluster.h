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
#include <algorithm>
#include <memory>
#include "Server.h"
#include "Pod.h"

using namespace std;
class KubernetesCluster{
  private:
    vector<shared_ptr<Server>>nodes_ ;
    vector<unique_ptr<Pod>> pods_ ;

  public:
     void addNode(shared_ptr<Server> node);
     bool removePod(const string& name);
     void deployPod(unique_ptr<Pod> pod);
     bool schedulePod(Pod& pod);// will search for a possible server and if exists make the changes and return true elsee false
     Pod* getPod(const string& name);
     string getMetrics() const;
     friend ostream& operator<<(ostream& os, const KubernetesCluster& c);
};

