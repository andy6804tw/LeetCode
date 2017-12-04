# 1-Two Sum (C Language)

## Problem

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

**Example:**
```
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```


##### Solution 1.

此種方法是利用容器 HashMap 下去實作使用 Key、Value 下去做搜尋，Key 儲存 twoSum 裡的內容，Value 儲存 twoSum 裡的索引值。

- 暴力、窮舉
- Run Time:	102 ms
- 時間複雜度 O(n<sup>2</sup>)
- 空間複雜度 O(1)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target){
  int i=0,j=0;
  int *arr=(int *)malloc(2*sizeof(int));
  for (i=0; i < numsSize;i++){
    for (j=1+i; j < numsSize;j++){
      if(nums[i]+nums[j]==target){
        arr[0]=i;
        arr[1]=j;
        return arr;
      }
    }
  }
  return arr;
}
```
