#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
bool isIsomorphic(char *s, char *t);
int main()
{
  printf("%d\n",isIsomorphic("add","egg"));
}
bool isIsomorphic(char *s, char *t)
{
  int arr1[255]={0}, arr2[255]={0}, i = 0;
  for (i = 0; i < strlen(s); i++)
  {
    if (arr1[s[i]] != arr2[t[i]])
      return 0;
    arr1[s[i]] = i + 1;
    arr2[t[i]] = i + 1;
  }
  return 1;
}
