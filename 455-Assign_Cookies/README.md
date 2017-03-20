# Description
Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie. Each child i has a greed factor gi, which is the minimum size of a cookie that the child will be content with; and each cookie j has a size sj. If sj >= gi, we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.

## Note:  
You may assume the greed factor is always positive.
You cannot assign more than one cookie to one child.

## Example 1:  
```
Input: [1,2,3], [1,1]

Output: 1

Explanation: You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3.
And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
You need to output 1.
```

## Example 2:  
```
Input: [1,2], [1,2,3]

Output: 2

Explanation: You have 2 children and 3 cookies. The greed factors of 2 children are 1, 2.
You have 3 cookies and their sizes are big enough to gratify all of the children,
You need to output 2.
```

# Thinking
先考虑分配完成后的最终状态：  
- 饼干全部被分配出去，那么剩下的不满足的孩子不管是否更贪婪，结果都是等价的  
- 饼干剩下一部分未被分配，那么剩下的不满足孩子集中的最小贪婪应大于最大饼干。

如果两个集合都是有序的，那么从头开始比较，如果满足则两迭代器均右移，否则饼干迭代器右移，直到饼干迭代器达到尾端。

如果都是无序集合，那么先排序。
复杂度O(nlogn)
