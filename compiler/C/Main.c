#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
#define max(num1,num2) num1>num2?num1:num2;
char *addBinary(char *a, char *b);
int main(){
  printf("%s", addBinary("1","111"));
  //printf("%lu", strlen(addBinary("110", "10")));
}
char *addBinary(char *a, char *b)
{ 
  int maxLen=max(strlen(a),strlen(b));
  int i=strlen(a)-1,j=strlen(b)-1,carry=0,index=0;
  char *arr = (char *)calloc(3, sizeof(char));
  while(i>=0||j>=-0){
    int num=0;
    if(i>=0)
      num+=a[i--]-'0';
    if(j>=0)
      num+=b[j--]-'0';
    arr[index++]=(num+carry)%2+'0';
    carry = (num + carry) / 2;
  }
  if (carry > 0)
  {
    arr = (char *)realloc(arr, 2 + index * sizeof(char));
    arr[index++] = carry + '0';
  }
  for (int i = 0; i < index / 2; i++)
  {
    char temp;
    temp = arr[i];
    arr[i] = arr[index - i-1];
    arr[index - i-1] = temp;
  }
  arr[index+1]='\0';
  return arr;
}
