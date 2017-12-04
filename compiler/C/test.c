#include<stdio.h>
#include <stdlib.h>
#include <limits.h>
int reverse(int x);
int main(){
  int x=100;
  printf("%d\n", reverse(1534236469));
}
int reverse(int x){
  long tot=0;
  while(x!=0){
    tot = (tot * 10) + (x % 10);
    x /= 10;
  }
  if (tot > INT_MAX || tot < INT_MIN)
    return 0;
  else
    return tot;
}
