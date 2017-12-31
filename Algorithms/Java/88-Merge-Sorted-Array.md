# 88. Merge Sorted Array (Java)

## Problem

Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.



##### Solution 1.

將nums2陣列內容與nums1合併，最後使用 Arrays 中的 sort() 內建陣列排序。

- 陣列走訪、排序
- Run Time: 1 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```java
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int index=0;
        for(int i=m;i<m+n;i++) {
        		nums1[i]=nums2[index++];
        }
        Arrays.sort(nums1);
    }
}
```

##### Solution .2

將nums2陣列內容與nums1合併，再來將nums1複製到暫存的temp陣列中，最後經由temp與nums2逐一走訪將小的一方依序塞入nums1中。

- 陣列走訪、排序
- Run Time: 1 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```java
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int temp[]=nums1.clone(),i=0,j=0,index=0;
        while(i<m||j<n) {
        		if(i<m&&j<n) {
        			if(temp[i]<nums2[j]) {
        				nums1[index++]=temp[i++];
        			}else {
        				nums1[index++]=nums2[j++];
        			}
        		}else if(i==m) {
        			nums1[index++]=nums2[j++];
        		}else {
        			nums1[index++]=temp[i++];
        		}	
        }
    }
}
```
