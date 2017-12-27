#  67. Add Binary (C Language)

## Problem

Given two binary strings, return their sum (also a binary string).

For example,
a = "11"
b = "1"
Return "100".

##### Solution 1.

由於 c語言沒有字串翻轉函式所以，最後使用 in-place algorithm 反轉字串。

- 二元搜尋
- Run Time: 3 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```c
#define max(num1, num2) num1 > num2 ? num1 : num2;
char * addBinary(char * a, char * b) {
  int maxLen = max(strlen(a), strlen(b));
  int i = strlen(a) - 1, j = strlen(b) - 1, carry = 0, index = 0;
  char * arr = (char * ) calloc(maxLen + 1, sizeof(char));
  while (i >= 0 || j >= -0) {
    int num = 0;
    if (i >= 0)
      num += a[i--] - '0';
    if (j >= 0)
      num += b[j--] - '0';
    arr[index++] = (num + carry) % 2 + '0';
    carry = (num + carry) / 2;
  }
  if (carry > 0) {
    arr = (char * ) realloc(arr, 2 + index * sizeof(char));
    arr[index++] = carry + '0';
  }
  for (int i = 0; i < index / 2; i++) {
    char temp;
    temp = arr[i];
    arr[i] = arr[index - i - 1];
    arr[index - i - 1] = temp;
  }
  arr[index] = '\0';
  return arr;
}
```
