#  67. Add Binary (Java)

## Problem

Given two binary strings, return their sum (also a binary string).

For example,
a = "11"
b = "1"
Return "100".

##### Solution 1.

土法煉鋼法走訪每位數相加，最後還要判斷是否有進位。

- 二元搜尋
- Run Time: 7 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```java
class Solution {
    public String addBinary(String a, String b) {
        int i=a.length()-1,j=b.length()-1,carry=0;
        StringBuffer str=new StringBuffer();
        while(i>=0||j>=0) {
        		if(i>=0) {
        			if(j<0) {
        				str.append((a.charAt(i)-'0'+carry)%2+"");
        				carry=(a.charAt(i)-'0'+carry)/2;
        			}
        			else {
        				str.append((a.charAt(i)-'0'+b.charAt(j)-'0'+carry)%2+"");
        				carry=(a.charAt(i)-'0'+b.charAt(j)-'0'+carry)/2;
        			}
        		}else {
    				str.append((b.charAt(j)-'0'+carry)%2+"");
    				carry=(b.charAt(j)-'0'+carry)/2;
    			}
        		i--;j--;
        }	
        if(carry>0)
        		str.append(carry+"");
        return str.reverse().toString();
    }
}
```

##### Solution 2.

方法二使用 Java 內建 BigInteger 大數下去做運算。

- 二元搜尋
- Run Time: 13 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```java
import java.math.BigInteger;
class Solution {
    public String addBinary(String a, String b) {
        BigInteger x=new BigInteger(a,2);
        BigInteger y=new BigInteger(b,2);
        return x.add(y).toString(2);
    }
}
```
