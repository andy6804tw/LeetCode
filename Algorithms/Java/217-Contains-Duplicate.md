# 217. Contains Duplicate (Java)

## Problem

Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.



##### Solution 1.

使用 Set 容器來記錄每個值，Set 是一個集合會自動拋棄重複數字。

- 字串處理
- Run Time: 16 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```java
class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> set =new HashSet<>();
        for(int i=0;i<nums.length;i++) {
        		set.add(nums[i]);
        }
        return nums.length != set.size();
    }
}
```

##### Solution 2.

使用 Arrays.stream() 的d istinct() 找出不重複的數值數量。

- 字串處理
- Run Time: 16 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```java
class Solution {
    public boolean containsDuplicate(int[] nums) {
        return Arrays.stream(nums).distinct().toArray().length != nums.length;
    }
}
```
