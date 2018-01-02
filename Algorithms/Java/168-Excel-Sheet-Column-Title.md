#  168. Excel Sheet Column Title (Java)

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

這題就把它當成是一個十進位轉二十六進位的轉換，每個英文字母利用ASCii來轉換。

- 進位轉換
- Run Time: 0 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```java
class Solution {
    public String convertToTitle(int n) {
        StringBuilder str=new StringBuilder();
        while(n>0) {
        		n--;
        		str.append((char)(n%26+'A'));
        		n/=26;
        }
        return str.reverse().toString();
    }
}
```
