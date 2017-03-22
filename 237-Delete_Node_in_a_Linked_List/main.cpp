//
// Created by miller on 3/20/17.
//
#include <iostream>
#include <string>

using namespace std;

struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};
void deleteNode(ListNode* node) {
  decltype(node) next = node->next;
  node->val = next->val;
  node->next = next->next;
  delete next;
}
int main(int argc, char** argv){
  //Test Case
  cout << convertToBase7(100);
  return 0;
}
