# 205. Isomorphic Strings (Java)

## Problem

Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

For example,
Given "egg", "add", return true.

Given "foo", "bar", return false.

Given "paper", "title", return true.

Note:
You may assume both s and t have the same length.

##### Solution 1.

這題建立兩個 255 長度的陣列，儲存每個字母每一次出現的索引值，若索引值不同即可回傳 false。

- 字串處理
- Run Time: 8 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```java
class Solution {
    public boolean isIsomorphic(String s, String t) {
         int arr1[]=new int [255],arr2[]=new int [255];
        for(int i=0;i<s.length();i++) {
        		
        		if(arr1[s.charAt(i)]!=arr2[t.charAt(i)]) {
        			return false;
        		}
        		
        		arr1[s.charAt(i)]=i;
        		arr2[t.charAt(i)]=i;
        }
        return true;
    }
}
```
