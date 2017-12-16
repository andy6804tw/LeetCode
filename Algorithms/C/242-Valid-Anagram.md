# 242. Valid Anagram (C Language)

## Problem

Given two strings s and t, write a function to determine if t is an anagram of s.

For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.

Note:
You may assume the string contains only lowercase alphabets.

Follow up:
What if the inputs contain unicode characters? How would you adapt your solution to such case?

##### Solution 1.

分別將兩字串切成字串陣列再由內建 Arrays 做字元排序，最後依序做比對，一開始兩字串長度不同即可立即回傳 false

- 字串處理
- Run Time: 3 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```c
bool isAnagram(char * s, char * t) {
  if (strlen(s) != strlen(t))
    return 0;
  int arr[26] = {
    0
  }, i = 0;
  while ( * s) {
    arr[ * s - 'a']++;
    arr[ * t - 'a']--;
    s++;
    t++;
  }
  for (i = 0; i < 26; i++) {
    if (arr[i] != 0)
      return 0;
  }
  return 1;
}
```
