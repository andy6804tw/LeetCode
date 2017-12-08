#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char s[] = "H dd dvd ";
  char *token=strtok(s," ");
  while(token!=NULL){
    printf("%s\n",token);
    token=strtok(NULL," ");
  }
}
