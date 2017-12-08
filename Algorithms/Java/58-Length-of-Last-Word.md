# 58. Length of Last Word (Java)

## Problem

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

```
Example:

Input: "Hello World"
Output: 5
```

##### Solution 1.

這題我是使用 Java 的字串切割 split 並取出最後一筆字串回傳長度。

- 字串處理
- Run Time: 7 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```java
class Solution {
	public int lengthOfLastWord(String s) {
		String arr[] = s.split(" ");
		if (arr.length == 0)
			return 0;
		else
			return arr[arr.length - 1].length();
	}
}
```




