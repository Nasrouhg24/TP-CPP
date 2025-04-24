/**
 * Author: Nasreddine El Gourji
 * Created on: 21.04.2025 at 18:10
 * Description: exo3.cpp
 */

//
// Created by nasre on 21.04.2025.
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
#include <memory>

using namespace std;



class PaireBase{
  public:
    virtual void afficher() = 0;
    virtual ~PaireBase() = default;

};




template <typename T, typename U>
class Paire: public PaireBase{
  private:
    T first_;
    U second_;
  public:
    Paire(T first, U second):first_(first), second_(second){}

    void afficher() override{
      if constexpr (std::is_same<U, bool>::value){
        cout<<"Bool : "<<first_<<" "<<(second_ ? "vrai": "faux")<<endl;
      }
      else{
        cout <<first_<<" "<<second_ <<endl;
      }
    }


};



template <typename T>
class Paire<T,int>: public PaireBase{
  private :
    T first_;
    int second_;

  public :
    Paire(T first, int second):first_(first), second_(second){}

    void afficher() override{
		cout <<"entier :" <<first_<<" "<<second_ <<endl;
    }
};






int main() {
  	std::vector<std::unique_ptr<PaireBase>> paires;
	paires.push_back(std::make_unique<Paire<double, int>>(3.14, 42));
	paires.push_back(std::make_unique<Paire<int, bool>>(10, true));
	paires.push_back(std::make_unique<Paire<std::string, double>>("Test", 2.71));
	for (const auto& p : paires) {
		p->afficher();
	}


    return 0;
}
