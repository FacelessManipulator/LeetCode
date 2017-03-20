//
// Created by miller on 3/20/17.
//
#include <iostream>
#include <stack>
#include <algorithm>
#include "../utils.cpp"
using namespace std;

int sumOfLeftLeaves(TreeNode* root) {
  if(root == NULL)
    return 0;
  stack<TreeNode*> rb;
  auto cur = root;
  int sum = 0;
  bool lflag = true;
  while(true){
    if(cur->right != NULL)
      rb.push(cur->right);
    if(cur->left != NULL){
      cur = cur->left;
      lflag = true;
    }
    else{
      //判断是否为左子叶
      if(lflag && cur->right == NULL && cur!=root)
        sum += cur->val;
      if(rb.empty())
        break;
      cur = rb.top();
      rb.pop();
      lflag = false;
    }
  }
  return sum;
}

int main(int argc, char** argv){
  //Test Case
  string a = "asd";
  canConstruct("a", "b");
  return 0;
}
