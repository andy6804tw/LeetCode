# 53. Maximum Subarray (Python)

## Problem

Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.


More practice:
If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.


##### Solution 1.

Kadane's 演算法能夠使用一個迴圈得出答案，若要更快速就要使用分而治之來實作了，間單來說 Kadane's 演算法就是當遇到負數就歸零，每次相加結果取最大數。

- 陣列走訪
- Run Time: 14 ms

```py
class Solution(object):
    def maxSubArray(self, nums):
        maxTotal=0
        tot=0
        for i in range(len(nums)):
            tot+=nums[i]
            if tot<=0:
                tot=0
            if tot>maxTotal:
                maxTotal=tot
        return maxTotal
        
```

##### Solution 2.
跟第一種方法差不多但是會先假設第一個數字是起頭。

- 陣列走訪
- Run Time: 588 ms

```py
class Solution(object):
    def maxSubArray(self, nums):
        maxTotal=nums[0]
        tot=nums[0]
        for i in range(1, len(nums)):
            tot+=nums[i]
            if nums[i]>tot:
                tot=nums[i]
            if tot>maxTotal:
                maxTotal=tot
        return maxTotal
        
```
