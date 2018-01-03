#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef int bool;
int majorityElement(int *nums, int numsSize);
int main()
{
  int arr[]={2,2,3,3,4,5};
  printf("%d\n",majorityElement(arr,6));
}
int majorityElement(int *nums, int numsSize)
{
  int num=0,count=0,i=0;
  for(i=0;i<numsSize;i++){
    printf("%d ",count);
    if(count==0)
      num=nums[i];
    if(nums[i]==num)
      count++;
    else
    count--;
  }
  return num;

}
