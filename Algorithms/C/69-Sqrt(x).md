#  69. Sqrt(x) (C Language)

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

此方法為二元逼近法，這題會超過 int 大小所以變數記得要宣告 long 最後回傳時再強制轉型。

- 二元搜尋
- Run Time: 12 ms
- 時間複雜度: O(log n)
- 空間複雜度: O(1)

```c
int mySqrt(int x) {
    long r=x;
    while(r*r>x){
      r = (r + x / r) / 2;
    }
    return (int)r;
}
```
