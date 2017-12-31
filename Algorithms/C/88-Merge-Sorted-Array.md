# 88. Merge Sorted Array (C Language)

## Problem

Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.



##### Solution 1.

將nums2陣列內容與nums1合併，最後再用氣泡排序法將nums1排序。

- 陣列走訪、排序
- Run Time: 3 ms
- 時間複雜度: O(n^2)
- 空間複雜度: O(n)

```c
void merge(int * nums1, int m, int * nums2, int n) {
  int i = m, p = n, j = 0;
  for (; i < m + n; i++)
    nums1[i] = nums2[--p];
  for (i = 0; i < m + n; i++) {
    for (j = i + 1; j < m + n; j++) {
      if (nums1[i] > nums1[j]) {
        int temp = nums1[i];
        nums1[i] = nums1[j];
        nums1[j] = temp;
      }
    }
  }
}
```

##### Solution .2

此寫法是從大到小逐一放入nums1陣列當中。

- 陣列走訪、排序
- Run Time: 3 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```c
void merge(int * nums1, int m, int * nums2, int n) {
  int index = m + n - 1;
  m--, n--;
  while (m >= 0 || n >= 0) {
    if (m >= 0 && n >= 0) {
      if (nums1[m] > nums2[n]) {
        nums1[index--] = nums1[m--];
      } else {
        nums1[index--] = nums2[n--];
      }
    } else if (n < 0) {
      nums1[index--] = nums1[m--];
    } else {
      nums1[index--] = nums2[n--];
    }
  }
}
```
