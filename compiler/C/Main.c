#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
bool isAnagram(char *s, char *t);
int main()
{
  printf("%d\n", isAnagram("", ""));
}
bool isAnagram(char *s, char *t)
{
  if(strlen(s)!=strlen(t))
    return 0;
  int arr[26]={0},i=0;
  while(*s){
    arr[*s - 'a']++;
    arr[*t-'a']--;
    s++;
    t++;
  }
  for(i=0;i<26;i++){
    if(arr[i]!=0)
      return 0;
  }
  return 1;
}
