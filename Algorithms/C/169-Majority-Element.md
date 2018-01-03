#  169. Majority Element (C Language)

## Problem

Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.


##### Solution 1.

此方法不需用到排序，前提是最大重複數字一定佔總數過半。

- 進位轉換
- Run Time: 6 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```c
int majorityElement(int * nums, int numsSize) {
  int num = 0, count = 0, i = 0;
  for (i = 0; i < numsSize; i++) {
    if (count == 0)
      num = nums[i];
    if (nums[i] == num)
      count++;
    else
      count--;
  }
  return num;
}
```
