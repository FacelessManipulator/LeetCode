//
// Created by miller on 3/20/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "../utils.cpp"
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
  sort(g.begin(), g.end());
  sort(s.begin(), s.end());
  int content = 0;
  for(int i = 0, j = 0; i< g.size() && j < s.size(); ++j){
    if(s[j] >= g[i]){
      ++content;
      ++i;
    }
  }
  return content;
}

int main(int argc, char** argv){
  //Test Case
  vector<int> g{1,2,3};
  vector<int> s{1,1};
  cout << findContentChildren(g,s);
  return 0;
}
