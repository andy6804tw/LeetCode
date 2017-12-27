#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
#define max(num1,num2) num1>num2?num1:num2;
char *countAndSay(int n);
int main(){
  printf("%s", countAndSay(5));
  //printf("%lu", strlen(addBinary("110", "10")));
}
char *countAndSay(int n){
  char *arr = (char *)calloc(10000, sizeof(char));
  arr[0] = '1';
  arr[1]='\0';
  while(n--!=1){
    int count=1,i=1,index=0;
    char *temp = (char *)calloc(10000, sizeof(char));
    for (i = 1; i < strlen(arr); i++)
    {
      if (arr[i] == arr[i - 1])
      {
        count++;
      }else{
        temp[index++] = count + '0';
        temp[index++] = arr[i-1];
        count =1;
      }
    }
    temp[index++] = count + '0';
    temp[index++] = arr[i - 1];
    temp[index] = '\0';
    strcpy(arr, temp);
  }
  return arr;
}
