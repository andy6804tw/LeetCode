#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
int removeDuplicates(int *nums, int numsSize);
int main(){
  int x[]={1,1,2};
  printf("%d\n", removeDuplicates(x,3));
}
int removeDuplicates(int *nums, int numsSize){
  int index=0,i=0;
  for(;i<numsSize;i++){
    if(i==0||nums[i]>nums[i-1]){
      nums[index++]=nums[i];
    }
  }
  return index;
}
