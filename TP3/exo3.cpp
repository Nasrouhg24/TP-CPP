#include <iostream>
#include <set>
using namespace std;
int main(){
  set<int> s ={5,10,15,20};
  cout <<"Original :";
  for (auto it = s.begin(); it != s.end(); it++){
    cout << *it<<" " ;
  }
  cout << endl;
  //inserting an existing value
  s.insert(10);
  cout <<"After insert 10 :";
  for (auto it = s.begin(); it != s.end(); it++){
    cout << *it <<" ";
  }

}