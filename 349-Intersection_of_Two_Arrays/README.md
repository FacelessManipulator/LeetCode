# Description
Given two arrays, write a function to compute their intersection.

Example:
```
Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].
```

Note:
Each element in the result must be unique.
The result can be in any order.

# Thinking
Python的set好像自带这个函数。
方便一点以第一个数组建一个hashset,建立复杂度O(n),然后遍历第二个数组,如果hashset中存在相同元素，则将该元素唯一地加入结果集。
不过hashset虽然理论O(n)，但是空间消耗不稳定，hash计算耗时间，感觉上虽然不如map好用，所以还是用map好。
