#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
void moveZeroes(int *nums, int numsSize);
int main()
{
  //printf("%d\n",isIsomorphic("add","egg"));
  int arr[] = {0, 1, 0, 3, 12};
  moveZeroes(arr);
}
void moveZeroes(int *nums, int numsSize)
{
  int index=0,i=0;
  for(i=o;i<numsSize;i++){
    if(nums[i]!=0){
      nums[index++]=nums[i];
    }
  }
  for(int i=index;i<numsSize;i++)
    nums[i]=0;
}
