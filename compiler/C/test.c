#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
int strStr(char *haystack, char *needle);
int main(){
  printf("%d\n", strStr("","1"));
}
int strStr(char *haystack, char *needle){
   int haystackLength = strlen(haystack), needleLength = strlen(needle), i = 0, j = 0;
   if (haystackLength < needleLength)
     return -1;
   else if (needleLength == 0)
     return 0;
   char arr[needleLength], origin[haystackLength];
   for (; i < haystackLength;i++){
     for (j=0; j < needleLength;j++){
       if (haystack[i + j] != needle[j]){
          break;
       }
      }
      if (j == needleLength)
      return i;
    }
    return -1;
}
