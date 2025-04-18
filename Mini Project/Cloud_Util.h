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
#include "KubernetesCluster.h"


using namespace std;


void display(const KubernetesCluster& cluster);
void deployPods(KubernetesCluster& cluster,vector<unique_ptr<Pod>>& pods);