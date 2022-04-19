# 217. Contains Duplicate (Python)

## Problem
Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

**Example 1:**
```
Input: nums = [1,2,3,1]
Output: true
```

**Example 2:**
```
Input: nums = [1,2,3,4]
Output: false
```

**Example 3:**
```
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
```



## Solution 1.

使用 sorted() 或是 sort() 來排序，再逐一搜尋是有存在重複元素。

- 串列處理
- Run Time: 578 ms

```py
class Solution(object):
    def containsDuplicate(self, nums):
        nums.sort()
        for i in range(len(nums)-1):
            if nums[i]==nums[i+1]:
                return True
        return False    
```

## Solution 2.
使用 Set 容器來記錄每個值，Set 是一個集合會自動拋棄重複數字。因為少了排序所以可以大幅減少搜尋時間。

- 串列處理
- Run Time: 18 ms

```py
class Solution(object):
    def containsDuplicate(self, nums):
        return len(set(nums))!=len(nums)
```