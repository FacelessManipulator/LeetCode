# Description
Given a non-empty integer array of size n, find the minimum number of moves required to make all array elements equal, where a move is incrementing n - 1 elements by 1.

## Example:
```

Input:
[1,2,3]

Output:
3

Explanation:
Only three moves are needed (remember each move increments two elements):

[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
```

# Thinking
一个长度为n的向量A，n-1个元素都加一，可以等价于全部元素加一，1个元素减一。既然最终结果是A中所有元素相等，那么其实等价于每回合最大元素减一，直到所有元素都等于最小元素。
步数 m = SUM(Ai - A1)
