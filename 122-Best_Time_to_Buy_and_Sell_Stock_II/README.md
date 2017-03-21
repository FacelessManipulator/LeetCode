# Description
Say you have an array for which the i element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).

# Thinking
这个问题就是一个应用题，应该从Leetcode上去掉.
每个回合结束有两种状态，持有股票和不持有。如果下一回合下跌，就不持有，如果下一回合上涨，则持有。
