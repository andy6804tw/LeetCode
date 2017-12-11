#  69. Sqrt(x) (Java)

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

Java 寫法利用內建的 Math.sqrt() 來計算平方根。

- 二元搜尋
- Run Time: 37 ms
- 時間複雜度: O(log n)
- 空間複雜度: O(1)

```java
class Solution {
    public int mySqrt(int x) {
        return (int)Math.sqrt(x);
    }
}
```
