#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
bool isValid(char *s);
int main(){
  int x=100;
  printf("%d\n", isValid("[[]"));
}
bool isValid(char *s)
{
  char stack[1000000];
  int i = 0, index = 0;
  while (*s)
  {
    if (*s == '(')
      stack[index++] = ')';
    else if (*s == '{')
      stack[index++] = '}';
    else if (*s == '[')
      stack[index++] = ']';
    else if (index == 0 || stack[--index] != *s)
      return 0;
    s++;
  }
  return index == 0;
}
