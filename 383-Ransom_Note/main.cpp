//
// Created by miller on 3/20/17.
//
#include <iostream>
#include <array>
#include <algorithm>
#include "../utils.cpp"
#include <string>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
  array<int, 26> mag;
  mag.fill(0);
  for(auto&iter : magazine)
    mag[iter-'a'] += 1;
  for(auto&iter : ransomNote){
    if((mag[iter-'a'] -= 1) < 0)
      return false;
  }
  print<int,26>(mag);
  return true;
}

int main(int argc, char** argv){
  //Test Case
  string a = "asd";
  canConstruct("a", "b");
  return 0;
}
