# Description
Find the sum of all left leaves in a given binary tree.

Example:
```
tree:
   3
  / \
  9  20
    /  \
    15   7

There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
```

# Thinking
最容易理解的解法当然是递归，否则就得用栈，好久没压栈了，这次就来压一压栈。
逻辑大概就是先序遍历稍微改一改，碰到右子树就压栈，左子树就迭代。只要在迭代到头要退栈之前判断一下当前节点是否为左叶节点即可。
当然递归只要三行代码，逻辑清晰，这是压栈比不了的。349
