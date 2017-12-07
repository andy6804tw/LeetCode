#include <stdio.h>
#include <stdlib.h>
int searchInsert(int *nums, int numsSize, int target);
int main()
{
  int arr[]={1,3,4,5};
  printf("%d\n", searchInsert(arr,4,2));
}
int searchInsert(int *nums, int numsSize, int target)
{
  int index=numsSize,i=0;
  for(;i<numsSize;i++){
    if(nums[i]>=target){
      index = i;
      break;
    }
  }
  return i;
}
