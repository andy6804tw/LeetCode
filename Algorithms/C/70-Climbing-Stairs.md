#  70. Climbing Stairs (C Language)

## Problem

You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.


**Example 1:**
```
Input: 2
Output:  2
Explanation:  There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
```
**Example 2:**
```
Input: 3
Output:  3
Explanation:  There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
```

##### Solution 1.

這題仔細看可以發現是費氏數列。

- 動態規劃
- Run Time: 3 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```C
int climbStairs(int n) {
  int arr[n + 1], i = 2;
  arr[0] = 1;
  arr[1] = 1;
  for (; i <= n; i++)
    arr[i] = arr[i - 1] + arr[i - 2];
  return arr[n];
}
```
