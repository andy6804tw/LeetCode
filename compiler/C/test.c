#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
int removeElement(int *nums, int numsSize, int val);
int main(){
  int x[] = {3, 2, 2, 3};
  printf("%d\n", removeElement(x, 4,3));
}
int removeElement(int *nums, int numsSize, int val){
  int index=0,i=0;
  for(;i<numsSize;i++){
    if(nums[i]!=val){
      nums[index++]=nums[i];
    }
  }
  return index;
}
