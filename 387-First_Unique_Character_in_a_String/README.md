# Description
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:
```
s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
```

Note: You may assume the string contain only lowercase letters.

# Thinking
首先，为了确认一个字符是没有重复的，至少遍历整个字符串，最低复杂度是O(n)。
要存储index和是否重复两种状态，只需要一个长度为26的数组即可。
