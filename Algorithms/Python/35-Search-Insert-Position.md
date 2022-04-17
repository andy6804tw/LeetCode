# 35. Search Insert Position (Python)

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
- Run Time: 41 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```py
class Solution(object):
    def searchInsert(self, nums, target):
        for i in range(len(nums)):
            if(nums[i]>=target):
                return i
        return len(nums)
```

##### Solution 2.
透過 Python list 的 find() 方法尋找串列中內容並返回 index。並透過 except 抓取例外，當串列中找無 target 時例外成立。再透過陣列走訪逐一找到適合的索引位置。

```py
class Solution(object):
    def searchInsert(self, nums, target):
        try:
            return nums.index(target)
        except:
            for i in range(len(nums)):
                if(nums[i]>=target):
                    return i
            return len(nums)
```
