# 121. Best Time to Buy and Sell Stock (Python)

## Problem
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

**Example 1:**

```
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
```

**Example 2:**

```
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
```

**Constraints:**
- 1 <= prices.length <= 105
- 0 <= prices[i] <= 104



##### Solution 1. (Time Limit Exceeded)
第一種暴力法採用巢狀迴圈導致超時。所以勢必要同時找出購買低點以及同時計算最大獲利(參考 Solution 2)。

- 陣列
- Run Time: Time Limit Exceeded

```py
class Solution(object):
    def maxProfit(self, prices):
        maxProfit=0
        for i in range(len(prices)-1):
            for j in range(i, len(prices)):
                profit=prices[j]-prices[i]
                if profit>maxProfit:
                    maxProfit=profit
        return maxProfit
```

##### Solution 2.
先設定最大獲利(maxProfit)與最低價格(minPrice)，再透過單迴圈依序比較陣列的每個值，每次的迴圈，都會找出目前的最大獲利與最低價格。

```py
class Solution(object):
    def maxProfit(self, prices):
        minPrice = prices[0]
        maxProfit = 0
        for i in range(1, len(prices)):
            minPrice = prices[i] if minPrice>prices[i] else minPrice
            maxProfit = prices[i] - minPrice if maxProfit<(prices[i] - minPrice) else maxProfit
        return maxProfit

```