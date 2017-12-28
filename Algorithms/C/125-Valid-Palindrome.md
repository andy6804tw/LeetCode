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

C語言什麼都必須自己來所以要手動把字串中的字母與數字抽離出來，遇到大寫字母轉成小寫 `(+ 'a' - 'A')` ，最後再同時頭尾比對每個字元是否相同，這邊要注意的是用字元陣列走訪似乎會超時(最後一筆過不了)，使用指標就會過了。

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
