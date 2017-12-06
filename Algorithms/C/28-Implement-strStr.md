# 28. Implement strStr() (C Language)

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

此方法跟 Java 解法2ㄧ樣，若要使用真正演算法解請參考 KMP。

- 陣列走訪、字元比對
- Run Time: 553 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```c
int strStr(char *haystack, char *needle){
   int haystackLength = strlen(haystack), needleLength = strlen(needle), i = 0, j = 0;
   if (haystackLength < needleLength)
     return -1;
   else if (needleLength == 0)
     return 0;
   char arr[needleLength], origin[haystackLength];
   for (; i < haystackLength;i++){
     for (j=0; j < needleLength;j++){
       if (haystack[i + j] != needle[j]){
          break;
       }
      }
      if (j == needleLength)
      return i;
    }
    return -1;
}
```
