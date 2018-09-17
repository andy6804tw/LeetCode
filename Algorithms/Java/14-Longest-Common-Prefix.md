# 20. Valid Parentheses (Java)

## Problem

Write a function to find the longest common prefix string amongst an array of strings.

##### Solution 1.

這題是要尋找最長共同字首，所以從第一個字元開始搜尋每次加一個比對字元下去搜索該字串是否存在於該字串中。

- Array
- Runtime: 17 ms
- 時間複雜度: O(S) , where S is the sum of all characters in all strings.
- 空間複雜度: O(1)

```java
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length==0||strs[0].length()==0)
			return "";
		else {
			int i=1;
			z:
			for(;i<strs[0].length()+1;i++) {
				String s=strs[0].substring(0,i);
				for(int j=0;j<strs.length;j++) {
					if(strs[j].indexOf(s)!=0)
						break z;
				}
			}
			return strs[0].substring(0, i-1);
		}
    }
}
```
