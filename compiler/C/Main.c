#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
void merge(int *nums1, int m, int *nums2, int n);
int main()
{
  int arr[]={1,0},arr2[]={2};
  merge(arr,1,arr2,1);
}
void merge(int *nums1, int m, int *nums2, int n)
{
  int i=m,p=n,j=0;
  for(;i<m+n;i++)
    nums1[i]=nums2[--p];
  for(i=0;i<m+n;i++){
    for(j=i+1;j<m+n;j++){
      if(nums1[i]>nums1[j]){
        int temp = nums1[i];
        nums1[i]=nums1[j];
        nums1[j]=temp;
      }
    }
  }
}
