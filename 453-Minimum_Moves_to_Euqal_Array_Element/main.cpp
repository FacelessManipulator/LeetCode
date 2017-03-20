//
// Created by miller on 3/20/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "../utils.cpp"
using namespace std;

int minMoves(vector<int>& nums) {
  int sum = 0, min = nums[0];
  for(auto& iter:nums){
      sum += iter - nums[0];
      min = iter > min ? min : iter;
  }
  return sum+nums.size()*(nums[0] - min);
}

int main(int argc, char** argv){
  //Test Case
  vector<int> nums{1,2,3};
  cout << minMoves(nums);
  return 0;
}
