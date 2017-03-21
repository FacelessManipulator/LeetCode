//
// Created by miller on 3/20/17.
//
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include "../utils.cpp"
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
  vector<int> res;
  map<int, int> intersection;
  for(auto&iter:nums1)
    intersection[iter] = 1;
  for(auto&iter:nums2)
    if(intersection.count(iter) >= 1)
      intersection[iter] = -1;
  print<int,int>(intersection);
  for(auto&iter:intersection){
    if(iter.second == -1)
      res.push_back(iter.first);
  }
  return res;
}

int main(int argc, char** argv){
  //Test Case
  vector<int> a={1,2,3}, b={2,3,4};
  intersection(a, b);
  return 0;
}
