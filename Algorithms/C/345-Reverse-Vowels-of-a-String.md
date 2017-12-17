# 345. Reverse Vowels of a String (C Language)

## Problem

Write a function that takes a string as input and reverse only the vowels of a string.

**Example 1:**
Given s = "hello", return "holle".

**Example 2:**
Given s = "leetcode", return "leotcede".

Note:
The vowels does not include the letter "y".


##### Solution 1.

C 比較麻煩指標陣列不能直接替換值，所以要先複製到一般的字元陣列中，再逐一的從頭和尾巴同時尋找母音字母。

- String 走訪
- Run Time: 6 ms
- 時間複雜度: O(n log n)
- 空間複雜度: O(n)

```c
char * reverseVowels(char * s) {
  int i = 0, j = strlen(s) - 1;
  char arr[1000000];
  strcpy(arr, s);
  char * ans = arr;
  while (i < j) {
    while (i < j && !(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')) {
      arr[i] = s[i];
      i++;
    }
    while (i < j && !(s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' || s[j] == 'I' || s[j] == 'o' || s[j] == 'O' || s[j] == 'u' || s[j] == 'U')) {
      arr[j] = s[j];
      j--;
    }
    arr[j] = s[i];
    arr[i] = s[j];
    i++;
    j--;
  }
  return ans;
}
```
