#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int maxSubArray(int *nums, int numsSize);
int main()
{
  int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  printf("%d", maxSubArray(nums,9));
}
int maxSubArray(int *nums, int numsSize)
{
  int i=0,tot=0,max=INT_MIN;
  for(;i<numsSize;i++){
    tot+=nums[i];
    if(max<tot)
    max=tot;
    if(tot<0)
    tot=0;
  }
  return max;
}
