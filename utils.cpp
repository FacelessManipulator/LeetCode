#include <iostream>
using namespace std;

//打印向量
template <class T>
void print(vector<T> vec){
  for(auto& iter:vec){
    cout << iter << ' ';
  }
  //刷新缓冲区
  cout << endl;
}

//打印数组
template <class T, size_t n>
void print(array<T,n> vec){
  for(auto& iter:vec){
    cout << iter << ' ';
  }
  //刷新缓冲区
  cout << endl;
}

//打印map
template <class T, class K>
void print(map<T,K> m){
  for(auto& iter:m){
    cout << iter.first << " : " << iter.second << endl;
  }
}
