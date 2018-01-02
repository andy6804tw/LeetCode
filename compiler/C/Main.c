#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef int bool;
char *convertToTitle(int n);
int main()
{
  char arr[]="ABA";
  printf("%s\n", convertToTitle(28));
}
char *convertToTitle(int n)
{
  int index=0,i=0;
  char *arr=(char*)calloc(10000,sizeof(char));
  while(n>0){
    n--;
    arr[index++]=(char)(n%26+'A');
    n/=26;
  }
  arr[index]='\0';
  for (i = 0; i < index/2; i++)
  {
     char temp = arr[index - i-1];
    arr[index - i-1] = arr[i];
    arr[i]=temp;
  }
  return arr;
}
