# 345. Reverse Vowels of a String (Java)

## Problem

Write a function that takes a string as input and reverse only the vowels of a string.

**Example 1:**
Given s = "hello", return "holle".

**Example 2:**
Given s = "leetcode", return "leotcede".

Note:
The vowels does not include the letter "y".


##### Solution 1.

這題將母音位置反轉其餘不變，所以用一個會圈分別從頭和尾巴同時一個一個掃，找到母音即可交換位置。

- String 走訪
- Run Time: 17 ms
- 時間複雜度: O(n log n)
- 空間複雜度: O(n)

```java
class Solution {
    public String reverseVowels(String s) {
        String vowels = "aeiouAEIOU";
		char arr[] = s.toCharArray();
		int i = 0, j = s.length() - 1;
		while (i < j) {
			while (i < j && !vowels.contains(arr[i] + "")) {
				i++;
			}
			while (i < j && !vowels.contains(arr[j] + "")) {
				j--;
			}
			char temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
		return new String(arr);
    }
}
```
