# 58. Length of Last Word (C Language)

## Problem

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

```
Example:

Input: "Hello World"
Output: 5
```

##### Solution 1.

這題使用 C語言的字串切割，並走訪每個切割並記錄字母數，回傳最後的數目。

- 字串處理
- Run Time: 0 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```c
int lengthOfLastWord(char * s) {
  char * arr = strtok(s, " ");
  int count = 0;
  while (arr != NULL) {
    count = (int) strlen(arr);
    arr = strtok(NULL, " ");
  }
  return count;
}
```




