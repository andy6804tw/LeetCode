#  125. Valid Palindrome (Java)

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

這題就把它當成是一個二十六進位轉十進位位的轉換。

- 進位轉換
- Run Time: 3 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```java
class Solution {
    public int titleToNumber(String s) {
        int tot=0;
        for(int i=0;i<s.length();i++) {
        		tot+=(int)Math.pow(26,s.length()-1-i)*(s.charAt(i)-'A'+1);
        		
        }
        return tot;
    }
}
```
