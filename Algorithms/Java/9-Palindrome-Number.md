# 9. Palindrome Number (Java)

## Problem

Determine whether an integer is a palindrome. Do this without extra space.

**Some hints:**
```
Could negative integers be palindromes? (ie, -1)

If you are thinking of converting the integer to string, note the restriction of using extra space.

You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?

There is a more generic way of solving this problem.
```

##### Solution 1.

這題是考迴文，所以我就很簡單的把數字轉成字元陣列依序同時重頭及尾部一一比對是否相同。

- 陣列走訪、暴力
- Run Time: 254 ms
- 時間複雜度: O(n/2)
- 空間複雜度: O(n)

```java
class Solution {
    public boolean isPalindrome(int x) {
	        char str[]=Integer.toString(x).toCharArray();
	        for(int i=0,j=str.length-1;i<j;i++,j--) {
	        		if(str[i]!=str[j])
	        			return false;
	        }
	        return true;
	}
}
```
