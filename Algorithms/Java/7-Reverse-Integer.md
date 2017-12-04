# 7. Reverse Integer (Java)

## Problem

Given a 32-bit signed integer, reverse digits of an integer.

**Example 1:**

```
Input: 123
Output:  321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
```
Note:
Assume we are dealing with an environment which could only hold integers within the 32-bit signed integer range. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.


##### Solution 1.

此方法比較暴力若超出 Integer 範圍就輸出 0，其餘利用 StringBuffer 做字串反轉。

- StringBuffer 類別型態
- Run Time: 54 ms
- 時間複雜度 O(1)
- 空間複雜度 O(1)

```java
class Solution {
    public  int reverse(int x) {
		long ans=0;
		if(x==-2147483648)
			return 0;
		if(x<0) {
			ans=Long.parseLong("-"+new StringBuffer(-x+"").reverse().toString());
			if(ans<-2147483648)
				ans=0;
		}else {
			ans=Long.parseLong(new StringBuffer(x+"").reverse().toString());
			if(ans>2147483647)
				ans=0;
		}
		return (int)ans;
    }
}
```

