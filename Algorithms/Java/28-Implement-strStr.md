# 28. Implement strStr() (Java)
## Problem

Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

**Example 1:**

```
Input: haystack = "hello", needle = "ll"
Output: 2
```

**Example 2:**

```
Input: haystack = "aaaaa", needle = "bba"
Output: -1
```

##### Solution 1.

Java的優點大量函式庫可以套用，使用 String 類別裡的 indexOf() 方法即可得出答案 。

- String 函式
- Run Time: 6 ms
- 時間複雜度: O(1)
- 空間複雜度: O(1)

```java
class Solution {
    public int strStr(String haystack, String needle) {
        return haystack.indexOf(needle);
    }
}
```

##### Solution 2.

這個方法是用子字串切割逐一比對字串，使用 String 類別裡的 substring() 方法。

- String 函式
- Run Time: 8 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```java
class Solution {
   public int strStr(String haystack, String needle) {
		int haystackLength=haystack.length(),needleLength=needle.length(),i=0;
		if(haystackLength<needleLength)
    			return -1;
		else if(needleLength==0) {
			return 0;
		}
        while(i<=haystackLength-needleLength) {
        		if(haystack.substring(i, i+needleLength).equals(needle))
        			return i;
        		i++;
        }
        	return -1;
    }
}
```
