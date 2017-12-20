# 283. Move Zeroes (C Language)

## Problem

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.
Credits:
Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.

##### Solution 1.

題目要求不能配置新的空間，必須在原本陣列做修改勢必複雜度不超過 O(n)。

- 陣列走訪
- Run Time: 16 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```c
void moveZeroes(int * nums, int numsSize) {
  int index = 0, i = 0;
  for (i = 0; i < numsSize; i++) {
    if (nums[i] != 0) {
      nums[index++] = nums[i];
    }
  }
  for (int i = index; i < numsSize; i++)
    nums[i] = 0;
}
```
