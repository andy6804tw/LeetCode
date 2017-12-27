# 35. Search Insert Position (Java)

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

這題使用迭代將此次結果累加起來，不用擔心會爆或超時。

- 字串
- Run Time: 34 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```java
class Solution {
    public String countAndSay(int n) {
        String s="1";
    		int i=1;
    		while(n--!=1) {
    			String temp="";
    			int count=1;
    			for(i=1;i<s.length();i++) {
    				if(s.charAt(i)==s.charAt(i-1))
    					count++;
    				else {
    					temp+=count+""+s.charAt(i-1);
    					count=1;
    				}
    			}
    			temp+=count+""+s.charAt(i-1);
    			s=temp;
    			System.out.println(s);
    		}
    		return s;
    }
}
```
