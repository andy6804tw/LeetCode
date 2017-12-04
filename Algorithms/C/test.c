#include<stdio.h>
#include <stdlib.h>
int *twoSum(int *nums, int numsSize, int target);
int main()
{
  int n[]={1,2,4};
  int *p = (int *)malloc(2 * sizeof(int));
  p=twoSum(n, 3, 3);
  printf("%d",p[0]);
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target){
  int i=0,j=0;
  int *arr=(int *)malloc(2*sizeof(int));
  for (; i < numsSize;i++){
    for (; j < numsSize;j++){
      if(nums[i]+nums[j]==target){
        arr[0]=i;
        arr[1]=j;
        return arr;
      }
    }
  }
  return arr;
}
