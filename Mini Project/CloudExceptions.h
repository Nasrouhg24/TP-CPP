//
// Created by nasre on 05.05.2025.
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

using namespace std;

class CloudExceptions : public runtime_error {
  public:
  	explicit CloudExceptions(const std::string& msg); //excplicit pour eviter la conversion en objet
};
class AllocationException : public CloudExceptions {
  public :
    explicit AllocationException(const string& msg);


};
class FileException : public CloudExceptions {
  public :
    explicit FileException(const string& msg);

};
