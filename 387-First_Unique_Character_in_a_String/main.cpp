//
// Created by miller on 3/20/21.
//
#include <iostream>
#include <string>
#include <array>
#include "../utils.cpp"

using namespace std;

int firstUniqChar(string s) {
  array<int, 26> dic;
  int index = s.size();
  dic.fill(0);
  for(int i = 0; i < s.size(); i++){
    if(dic[s[i] - 'a'] == 0)
      dic[s[i] - 'a'] = i+1;
    else if(dic[s[i] - 'a'] > 0)
      dic[s[i] - 'a'] = -dic[s[i] - 'a'];
    else
      continue;
  }
  for(auto&iter: dic){
    if(iter > 0)
      index = index < iter-1 ? index : iter-1;
  }
  return index == s.size() ? -1 : index;
}
int main(int argc, char** argv){
  //Test Case
  string s = "loveleetcode";
  cout << firstUniqChar(s);
  return 0;
}
