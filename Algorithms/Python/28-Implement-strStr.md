# 28. Implement strStr() (Python)
## Problem

Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

**Example 1:**

```
Input: haystack = "hello", needle = "ll"
Output: 2
```

**Example 2:**

```
Input: haystack = "aaaaa", needle = "bba"
Output: -1
```

##### Solution 1.

Python 的優點大量函式庫可以套用，使用 find() 方法即可得出答案 。

- String 函式
- Run Time: 20 ms
- 時間複雜度: O(1)
- 空間複雜度: O(1)

```py
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
```

##### Solution 2.

這個方法是用子字串切割逐一比對字串，使用 String 類別裡的 substring() 方法。

- String 函式
- Run Time: 52 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```py
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        haystackLen = len(haystack)
        needleLen = len(needle)
        i=0
        
        while(i<=haystackLen-needleLen):
            if haystack[i:i+needleLen] == needle:
                return i
            i=i+1
        return -1
```
