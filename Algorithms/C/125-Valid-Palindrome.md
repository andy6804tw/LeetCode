#  125. Valid Palindrome (C Language)

## Problem


Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome.

##### Solution 1.

這題先把所有字母轉為小寫再很直覺的走訪每個字元把英文字母和數字存入 `StringBuffer` 中最後做字串翻轉 `reverse()` 與未翻轉做比對，記得字串比對要轉為一般 `String` 型態。

- 字串處理
- Run Time: 6 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```c
bool isPalindrome(char *s)
{
  char *arr=(char *)calloc(strlen(s)+1,sizeof(char));
  int i = 0, index = 0, j = 0, len = strlen(s);
  while (*s!='\0')
  {
    if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z') || (*s >= '0' && *s <= '9'))
    {
      if (*s >= 'A' && *s <= 'Z')
        arr[index++] = *s + 'a' - 'A';
      else
        arr[index++] = *s;
    }
    s++;
  }
  arr[index]='\0';
  for(i=0,j=index-1;i<j;i++,j--){
    if(arr[i]!=arr[j])
      return 0;
  }
  return 1;
}
```
