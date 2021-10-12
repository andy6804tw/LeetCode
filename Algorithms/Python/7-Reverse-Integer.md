# 7. Reverse Integer (Python)

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
此方法是官方的建議解，透過數學方式由後往前取位數並相加總和。必須注意的是 python 除法會取小數，因此每次必須透過 `//` 運算子取得整除位數(商)。而且當有負數時最後 `-1/10` Python 會輸出 -1 因此比免造成無窮迴圈必須一開始就把 x 先轉成整數。最終輸出時再判斷原本數值是否負數。此外在計算 rev 過程中還必須判斷是否異位 2<sup>31</sup> 等於 2147483648。

- 數學技巧
- Run Time: 55 ms
- 時間複雜度: O(log(x))
- 空間複雜度: O(1)

```py
class Solution:
    def reverse(self, x: int) -> int:
        rev = 0
        absX = abs(x)
        while absX != 0:
            pop = absX %10
            absX = absX // 10
            rev = rev *10 +pop
            if rev > 2147483648:
                return 0
        if x > 0:
            return rev
        else:
            return rev*-1
```

##### Solution 2.
這一種方法算是偷吃步解法。直接先將數值透過 `abs()` 取絕對值，之後再強制轉成字串型態 `str()`。之後再透過字串讀取技巧 `[::-1]` 取得反字串。最終輸出時再判斷原本數值是否負數。此外在計算 rev 過程中還必須判斷是否異位 2<sup>31</sup> 等於 2147483648，若成立及回傳 0。

```py
class Solution:
    def reverse(self, x: int) -> int:
            arr = str(abs(x))
            rev = int(arr[::-1])
            if rev > 2147483648:
                return 0
            if x > 0:
                return rev
            else:
                return rev*-1
```
