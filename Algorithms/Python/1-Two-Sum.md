# 1-Two Sum (Python)

## Problem

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

**Example:**
```
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```


### Solution 1.

採用暴力法雙迴圈逐一比對。

- 暴力、窮舉
- Run Time:	2924 ms
- 時間複雜度: O(n<sup>2</sup>)
- 空間複雜度: O(1)
```py
class Solution(object):
    def twoSum(self, nums, target):
        for i in range(len(nums)):
            for j in xrange(i+1, len(nums)):
                if nums[i]+nums[j] == target:
                    return [i, j]
```

### Solution 2.
此方法使用一個回圈走訪，每次提取數值減去目標值(target)得到剩餘數值(remain)。並透過 list 的 index 查詢是否串列中有此元素。

- Run Time:	512 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```py
class Solution(object):
    def twoSum(self, nums, target):
        for i in range(len(nums)):
            remain = target-nums[i]
            if remain in nums and i!=nums.index(remain):
                return [i, nums.index(remain)]
```

### Solution 3.
此種方法是利用容器 HashMap 下去實作使用 Key、Value 下去做搜尋，Key 儲存 twoSum 裡的內容，Value 儲存 twoSum 裡的索引值。

- One-pass Hash Table
- Run Time:	8 ms
- 時間複雜度 O(n)
- 空間複雜度 O(n)

```py

```
