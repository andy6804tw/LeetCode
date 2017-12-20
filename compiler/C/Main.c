#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
#define max(num1,num2) num1>num2?num1:num2; 
int rob(int *nums, int numsSize);
int main()
{
  int arr[] = {2, 1, 1, 2};
  printf("%d\n", rob(arr, 4));
}
int rob(int *nums, int numsSize)
{
  int num1=0,num2=0,i=0;
  for(i=0;i<numsSize;i+=2){
    num1=max(num1+nums[i],num2);
    if(i+1<numsSize)
      num2 = max(num1, num2 + nums[i + 1]);
  }
  return max(num1, num2);
}
