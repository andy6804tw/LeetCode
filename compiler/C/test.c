#include<stdio.h>
#include <stdlib.h>
typedef int bool;
bool isPalindrome(int x);
int main(){
  int x=100;
  printf("%d\n", isPalindrome(1090));
}
bool isPalindrome(int x){
  long tot=0,y=x;
  if(x<0)
    return 0;
  while(x!=0){
    tot=tot*10+x%10;
    x/=10;
  }
  if(tot==y)
    return 1;
  else
    return 0;
}
