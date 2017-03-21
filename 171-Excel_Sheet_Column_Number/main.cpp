//
// Created by miller on 3/20/17.
//
#include <iostream>
#include <string>

using namespace std;

int titleToNumber(string s) {
  int sum = 0;
  for(auto& iter:s){
    sum *= 26;
    sum += iter - 'A' + 1;
  }
  return sum;
}
int main(int argc, char** argv){
  //Test Case
  string a = "AA";
  cout << titleToNumber(a);
  return 0;
}
