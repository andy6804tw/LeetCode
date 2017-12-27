# 35. Search Insert Position (C Language)

## Problem

The count-and-say sequence is the sequence of integers with the first five terms as following:
```
1.     1
2.     11
3.     21
4.     1211
5.     111221
```
- 1 is read off as "one 1" or 11.
- 11 is read off as "two 1s" or 21.
- 21 is read off as "one 2, then one 1" or 1211.
- Given an integer n, generate the nth term of the count-and-say sequence.

Note: Each term of the sequence of integers will be represented as a string.

**Example 1:**

```
Input: 1
Output: "1"
```

**Example 2:**

```
Input: 4
Output: "1211"
```

##### Solution 1.

這題使用迭代將此次結果累加起來，不用擔心會爆或超時，C語言沒有字串型態所以比較麻煩的是要用字元陣列一個一個儲存，整數存回字元記得要再加 `'0'` 轉為 ASCII 。

- 字串
- Run Time: 29 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```c
char * countAndSay(int n) {
  char * arr = (char * ) calloc(10000, sizeof(char));
  arr[0] = '1';
  arr[1] = '\0';
  while (n-- != 1) {
    int count = 1, i = 1, index = 0;
    char * temp = (char * ) calloc(10000, sizeof(char));
    for (i = 1; i < strlen(arr); i++) {
      if (arr[i] == arr[i - 1]) {
        count++;
      } else {
        temp[index++] = count + '0';
        temp[index++] = arr[i - 1];
        count = 1;
      }
    }
    temp[index++] = count + '0';
    temp[index++] = arr[i - 1];
    temp[index] = '\0';
    strcpy(arr, temp);
  }
  return arr;
}
```
