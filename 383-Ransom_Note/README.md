# Description
Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

## Note:
You may assume that both strings contain only lowercase letters.
```
canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
```

# Thinking
首先想到的就是建一个数组存放magzine中每个字符的数量，然后遍历ransom note在数组相应位置减一。如果出现负数那么说明无法组成，否则返回成功。
