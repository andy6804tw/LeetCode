#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef int bool;
bool containsDuplicate(int *nums, int numsSize);
int main()
{
  int arr[] = {0};
  printf("%d\n", containsDuplicate(arr,1));
}
bool containsDuplicate(int *nums, int numsSize)
{
  int i=0,j=0,count=0,num=-1;
  for(i=0;i<numsSize;i++){
    for(j=i+1;j<numsSize;j++){
      if(nums[i]>nums[j]){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
      }
    }
  }
  for(i=0;i<numsSize;i++){
    if(num!=nums[i]){
      count++;
      num=nums[i];
    }
  }
  return numsSize != count;
}
