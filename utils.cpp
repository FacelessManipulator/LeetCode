#include <iostream>
using namespace std;
template <class T>
void print(vector<T> vec){
  for(auto& iter:vec){
    cout << iter << ' ';
  }
  //刷新缓冲区
  cout << endl;
}
