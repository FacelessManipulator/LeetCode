//
// Created by miller on 3/20/17.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
  int i = 0, j = numbers.size() - 1;
  for(; i != j; ){
    if(numbers[i] + numbers[j] > target)
      --j;
    else if(numbers[i] + numbers[j] < target)
      ++i;
    else
      break;
  }
  if( i != j)
    return {i,j};
  else
    return {-1, -1};
    //不存在
}
template <class T>
void print(vector<T> vec){
  for(auto& iter:vec){
    cout << iter << ' ';
  }
  //刷新缓冲区
  cout << endl;
}
int main(int argc, char** argv){
  //Test Case
  vector<int> numbers{2, 7, 11, 15};
  auto res = twoSum(numbers, 22);
  print<int>(res);
  return 0;
}
