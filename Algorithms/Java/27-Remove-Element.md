# 27. Remove Element (Java)

## Problem

Given an array and a value, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

**Example:**

```
Given nums = [3,2,2,3], val = 3,

Your function should return length = 2, with the first two elements of nums being 2.
```

##### Solution 1.

這題類似 `26. Remove Duplicates from Sorted Array`，一樣在不配置任何記憶體空間狀態下將指定數字 `val` 從原本陣列中移除。

- 陣列走訪
- Run Time: 9 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```java
class Solution {
    public int removeElement(int[] nums, int val) {
        int index=0;
		    for(int i=0;i<nums.length;i++) {
		    		if(nums[i]!=val) {
		    			nums[index++]=nums[i];
		    		}
		    }
		    return index;
    }
}
```
