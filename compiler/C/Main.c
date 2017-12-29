#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
int climbStairs(int n);
int main()
{
  printf("%d", climbStairs(5));
}
int climbStairs(int n) {
    int arr[n+1],i=2;
    arr[0]=1;
    arr[1]=1;
    for(;i<=n;i++)
      arr[i]=arr[i-1]+arr[i-2];
    return arr[n];
}
