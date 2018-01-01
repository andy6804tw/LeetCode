#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef int bool;
int titleToNumber(char *s); 
int main()
{
  char arr[]="ABA";
  printf("%d\n", titleToNumber(arr));
}
int titleToNumber(char *s)
{
  int tot = 0, i = 0, len = strlen(s);
  for (i = 0; i < len; i++)
  {
    tot += (int)pow(26, len - 1 - i) * (s[i] - 'A' + 1);
  }
  return tot;
}
