# 217. Contains Duplicate (C Language)

## Problem

Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.



##### Solution 1.

使用C語言的qsort()來排序，再逐一搜尋是有存在重複元素。

- 字串處理
- Run Time: 12 ms
- 時間複雜度: O(nlogn)
- 空間複雜度: O(1)

```c
int comp (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), comp);
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i+1]) return true;
    }
    return false;
}
```
