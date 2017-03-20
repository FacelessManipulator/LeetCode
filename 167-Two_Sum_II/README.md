# Description
Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution and you may not use the same element twice.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2

Subscribe to see which companies asked this question.

# Thinking
假设有一个序列A={a,b,c,d,.,p,.,r,..,y,z}，需要找到的和为p+r，且任意其他组合之和均不等于p+r。
思路很简单，从两端开始迭代，若相加和大于p+r，则右迭代器左移；若相加小于p+r，则左迭代器右移；若相等则返回index。
由于[a-p]+r <= p+r，所以不存在右迭代器左移小于r，同样左迭代器也不会右移至大于p。所以在存在结果的情况下，必定稳定与（p,r）组合处。
假如不存在结果，那么结果是两迭代器指向同一元素。
复杂度是o(n)
