# Description
Given an integer, return its base 7 string representation.

```
Example 1:
Input: 100
Output: "202"
Example 2:
Input: -7
Output: "-10"
```
Note: The input will be in range of [-1e7, 1e7].

# Thinking
就用传统的进制转换法，100(10)可以表示为1*10^2+0*10^1+0*10^0，同样可以表示为2*7^2+0*7^1+2*7^0.
那么要将A从十进制转换为七进制，只要a=A%7, A/=7,依次循环到A=0，a就是相应位数的值。
