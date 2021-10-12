# 9. Palindrome Number (Python)

## Problem

Determine whether an integer is a palindrome. Do this without extra space.

**Some hints:**
```
Could negative integers be palindromes? (ie, -1)

If you are thinking of converting the integer to string, note the restriction of using extra space.

You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?

There is a more generic way of solving this problem.
```

##### Solution 1.
這題是考迴文，解題思路可以借鏡 `7-Reverse-Integer` 的數字翻轉技巧來判斷翻轉前後是否都一樣。當 x 小於 0 (負數)情形直接回傳 False。或是直接翻轉一半的字串再與剩下另一半進行比對，此方法可以再節省執行時間，時間複雜度可以降成 O(log10(n))。

- 字串翻轉、數學
- Run Time: 102 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```py
class Solution:
    def isPalindrome(self, x: int) -> bool:
        rev = 0
        if x < 0:
            return False
        temp = x
        while temp != 0:
            pop = temp % 10
            temp = temp // 10
            rev = rev *10 + pop
        if rev == x:
            return True
        else:
            return False
```


##### Solution 2.
暴力法把數字轉成字串型態並依序同時重頭及尾部一一比對是否相同。

- 陣列走訪、暴力
- Run Time: 72 ms
- 時間複雜度: O(n/2)
- 空間複雜度: O(1)

```py
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        strX = str(x)
        i=0
        j=len(strX)-1
        while(i < j):
            if(strX[i]!=strX[j]):
                return False
            i += 1
            j -= 1
        return True
```
