#  169. Majority Element (Java)

## Problem

Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.


##### Solution 1.

第一種方法是使用 Map 方式 key 儲存數字 value 儲存出現次數。

- 進位轉換
- Run Time: 51 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```java
class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer,Integer> map= new HashMap<>();
    		int max=Integer.MIN_VALUE,ans=0;
    		for(int i=0;i<nums.length;i++) {
    			if(map.containsKey(nums[i])) {
    				map.put(nums[i], map.get(nums[i])+1);
    			}else {
    				map.put(nums[i], 1);
    			}
    			if(map.get(nums[i])>max) {
					ans=nums[i];
					max=map.get(nums[i]);
    			}
    		}
    		return ans;
    }
}
```

##### Solution 2.

第二種方法是先用內建排序後再依序找出數量最多的數字。

- 進位轉換
- Run Time: 6 ms
- 時間複雜度: O(nlogn)
- 空間複雜度: O(1)

```java
class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
		int max = Integer.MIN_VALUE, count = 1, ans = nums[0];
		for (int i = 1; i < nums.length; i++) {
			if (nums[i] == nums[i - 1]) {
				count++;
			} else {
				count = 1;
			}
			if (max < count) {
				max = count;
				ans = nums[i - 1];
			}
		}
		return ans;
    }
}
```

##### Solution 3.

仔細看懂題目發現題目有敘述到，重複的數字一定會占半數以上，所以排序後直接取中位數就可以了。

- 進位轉換
- Run Time: 3 ms
- 時間複雜度: O(nlogn)
- 空間複雜度: O(1)

```java
class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
		return nums[nums.length/2];
    }
}
```
