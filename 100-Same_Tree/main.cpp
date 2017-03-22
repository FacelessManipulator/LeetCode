//
// Created by miller on 3/20/17.
//
#include <iostream>
#include <string>

using namespace std;

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
bool isSameTree(TreeNode* p, TreeNode* q) {
  if(p == NULL && q == NULL)
    return true;
  else if(p == NULL || q == NULL)
    return false;
  else
    return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
int main(int argc, char** argv){
  //Test Case
  cout << convertToBase7(100);
  return 0;
}
