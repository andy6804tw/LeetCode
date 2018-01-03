#  167. Two Sum II - Input array is sorted (Java)

## Problem

Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution and you may not use the same element twice.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2



##### Solution 1.

第一種方法是使用 Map 方式 key 儲存數字 value 索引值，每次去搜target-該數的值的是否有在 map 中。

- 進位轉換
- Run Time: 6 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```java
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
		int arr[] = new int[2];
		for (int i = 0; i < nums.length; i++) {
			if (map.containsKey(target - nums[i])) {
				arr[0] = Math.min(i + 1, map.get(target - nums[i]) + 1);
				arr[1] = Math.max(i + 1, map.get(target - nums[i]) + 1);
				break;
			} else {
				map.put(nums[i], i);
			}
		}
		return arr;
    }
}
```
