# 7. Reverse Integer (C Language)

## Problem

Given a 32-bit signed integer, reverse digits of an integer.

**Example 1:**

```
Input: 123
Output:  321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
```
Note:
Assume we are dealing with an environment which could only hold integers within the 32-bit signed integer range. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.


##### Solution 1.

此方法是利用餘數求個位數，從尾部每次先 %10 再除以 10 直到 x等於 0 為止，跳出迴圈後第一個就是判斷該數是否超出 int 範圍(2147483647~-2147483648)，若超出範圍輸出 0 反之輸出答案，記住變數 tot 要設為長整數 long 不然步行判斷有無溢位(overflow)。

- StringBuffer 類別型態
- Run Time: 15 ms
- 時間複雜度: O(log<sub>10</sub>n)
- 空間複雜度: O(1)

```c
int reverse(int x){
  long tot=0;
  while(x!=0){
    tot = (tot * 10) + (x % 10);
    x /= 10;
  }
  if (tot > INT_MAX || tot < INT_MIN)
    return 0;
  else
    return tot;
}
```

