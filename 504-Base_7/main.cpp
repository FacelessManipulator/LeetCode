//
// Created by miller on 3/20/17.
//
#include <iostream>
#include <string>

using namespace std;

string convertToBase7(int num) {
  if(num == 0)
    return "0";
  string res = "";
  int tmp = num >= 0 ? num : -num;
  while(tmp != 0){
    res.push_back(tmp%7+'0');
    tmp /= 7;
  }
  if(num < 0)
    res.push_back('-');
  return {res.rbegin(), res.rend()};
}
int main(int argc, char** argv){
  //Test Case
  cout << convertToBase7(100);
  return 0;
}
