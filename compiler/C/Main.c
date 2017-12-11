#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mySqrt(int x) ;
int main()
{
  printf("%d\n",mySqrt(64));
}
int mySqrt(int x) {
    int r=x;
    while(r*r>x){
      r = (r + x / r) / 2;
    }
    return r;
}
