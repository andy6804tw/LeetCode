#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef int bool;
int *twoSum(int *numbers, int numbersSize, int target, int *returnSize);
int main()
{
  int arr[] = {2, 3, 4, 5, 6};
  printf("%d\n", twoSum(arr, 5,8,arr)[0]);
}
int *twoSum(int *numbers, int numbersSize, int target, int *returnSize){
  int arr[100000] = {0}, i = 0, *ans=(int*)calloc(2,sizeof(int));
  for(i=0;i<numbersSize;i++)
  {
    if (arr[target - numbers[i]+1000] > 0)
    {
      ans[0] = i + 1 > arr[target - numbers[i] + 1000] ? arr[target - numbers[i] + 1000] : i + 1;
      ans[1] = i + 1 < arr[target - numbers[i] + 1000] ? arr[target - numbers[i] + 1000] : i + 1;
      break;
    }else{
      arr[numbers[i] + 1000] = i + 1;
    }
  }
  *returnSize=2;
  return ans;
}
