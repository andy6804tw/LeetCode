#  168. Excel Sheet Column Title (C Language)

## Problem

Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:
```
    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
```

##### Solution 1.

這題就把它當成是一個十進位轉二十六進位的轉換，每個英文字母利用ASCii來轉換，由於c語言沒有字串翻轉函式所以要手動翻轉資料。

- 進位轉換
- Run Time: 0 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```c
char * convertToTitle(int n) {
  int index = 0, i = 0, j = 0;
  char * arr = (char * ) calloc(10000, sizeof(char));
  while (n > 0) {
    n--;
    arr[index++] = (char)(n % 26 + 'A');
    n /= 26;
  }
  arr[index] = '\0';
  for (i = 0, j = index - 1; i < j; i++, j--) {
    char temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return arr;
}
```

##### Solution 2.

這題就把它當成是一個十進位轉二十六進位的轉換，每個英文字母利用ASCii來轉換，由於c語言沒有字串翻轉函式所以要手動翻轉資料。

- 進位轉換
- Run Time: 0 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```c
char * convertToTitle(int n) {
  int index = 0, i = 0;
  char * arr = (char * ) calloc(10000, sizeof(char));
  while (n > 0) {
    n--;
    arr[index++] = (char)(n % 26 + 'A');
    n /= 26;
  }
  arr[index] = '\0';
  for (i = 0; i < index / 2; i++) {
    char temp = arr[index - i - 1];
    arr[index - i - 1] = arr[i];
    arr[i] = temp;
  }
  return arr;
}
```
