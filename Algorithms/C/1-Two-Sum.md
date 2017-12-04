# 1-Two Sum

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

**Example:**
```
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```

- Run Time: 102 ms
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
