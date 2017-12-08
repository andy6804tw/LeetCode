# 53. Maximum Subarray (C Language)

## Problem

Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.


More practice:
If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.


##### Solution 1.

Kadane's演算法能夠使用一個迴圈得出答案，若要更快速就要使用分而治之來實作了，間單蘭說Kadane's演算法就是當遇到負數就歸零，每次相加結果取最大數。

- 陣列走訪
- Run Time: 6 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```c
int maxSubArray(int * nums, int numsSize) {
  int i = 0, tot = 0, max = INT_MIN;
  for (; i < numsSize; i++) {
    tot += nums[i];
    if (max < tot)
      max = tot;
    if (tot < 0)
      tot = 0;
  }
  return max;
}
```




