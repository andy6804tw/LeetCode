#  125. Valid Palindrome (C language)

## Problem


Related to question `168. Excel Sheet Column Title`

Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:
```
    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
```

##### Solution 1.

這題就把它當成是一個二十六進位轉十進位位的轉換，每個英文字母利用ASCii來轉換，例如'B' = 'B'-'A'+1 = 2。

- 進位轉換
- Run Time: 6 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```c
int titleToNumber(char * s) {
  int tot = 0, i = 0, len = strlen(s);
  for (i = 0; i < len; i++) {
    tot += (int) pow(26, len - 1 - i) * (s[i] - 'A' + 1);
  }
  return tot;
}
```
