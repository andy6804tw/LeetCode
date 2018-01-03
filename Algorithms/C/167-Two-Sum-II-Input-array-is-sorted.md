#  167. Two Sum II - Input array is sorted (C Language)

## Problem

Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution and you may not use the same element twice.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2



##### Solution 1.

由於C語言沒有內建 Map 所以就用陣列的方式模擬，配置一個100000大小的陣列，其中有一個小問題是陣列可能包含負數，所以將每一個數字加上1000就能避開測資的負數了(偷吃步方法)。

- 進位轉換
- Run Time: 3 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```c
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
```
