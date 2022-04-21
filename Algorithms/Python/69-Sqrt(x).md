#  69. Sqrt(x) (Python)

## Problem

Implement int sqrt(int x).

Compute and return the square root of x.

x is guaranteed to be a non-negative integer.


**Example 1:**
```
Input: 4
Output: 2
```
**Example 2:**
```
Input: 8
Output: 2
```
Explanation: The square root of 8 is 2.82842..., and since we want to return an integer, the decimal part will be truncated.

##### Solution 1.
利用內建的 math.sqrt() 來計算平方根。最後強制轉型 int 取整數。

- Run Time: 24 ms

```py
import math
class Solution(object):
    def mySqrt(self, x):
        return int(math.sqrt(x))
```

##### Solution 2.


- 二元搜尋
- Run Time:  ms

```py

```
