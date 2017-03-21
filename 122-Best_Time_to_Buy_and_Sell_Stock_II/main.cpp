//
// Created by miller on 3/20/17.
//
#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
  int sum = 0;
  for(int i = 0; i < prices.size() - 1; ++i){
    if(prices[i] < prices[i + 1])
      sum += prices[i + 1] - prices[i];
  }
  return sum;
}
int main(int argc, char** argv){
  //Test Case
  vector<int> numbers{2, 7, 11, 15};
  cout << maxProfit(numbers);
  return 0;
}
