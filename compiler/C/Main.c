#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
char *reverseVowels(char *s);
int main()
{
  printf("%s\n", reverseVowels("a a"));
}
char *reverseVowels(char *s)
{
  const char *vowels = "aeiouAEIOU";
  char tmp;
  int i = 0, j = strlen(s) - 1;
  while (i < j)
  {
    while ((i < j) && !strchr(vowels, s[i]))
      i++;
    while ((i < j) && !strchr(vowels, s[j]))
      j--;
    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
    i++;
    j--;
  }
  return s;
}
