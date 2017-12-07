# 35. Search Insert Position (Java)

## Problem

Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

**Example 1:**
```
Input: [1,3,5,6], 5
Output: 2
```
**Example 2:**
```
Input: [1,3,5,6], 2
Output: 1
```
**Example 3:**
```
Input: [1,3,5,6], 7
Output: 4
```
**Example 4:**
```
Input: [1,3,5,6], 0
Output: 0
```

##### Solution 1.

這題使用陣列走訪一去檢查當該數大於等於 target 就輸出答案，index 初始化維陣列總長。

- 陣列走訪
- Run Time: 5 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```java
class Solution {
    public int searchInsert(int[] nums, int target) {
		int index=nums.length;
		for (int i = 0; i < nums.length; i++) {
			if (nums[i] >= target) {
				index = i;
				break;
			}
		}
		return index;
	}
}
```
