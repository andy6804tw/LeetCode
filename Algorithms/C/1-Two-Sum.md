# 1-Two Sum

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

**Example:**
```
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```

- Run Time: 102 ms
```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char *reverseString(char *s){
  int i = strlen(s) - 1;
  char *str = (char *)malloc(strlen(s) + 1);
  while (i >= 0)
  {
    *str = s[i--];
    str++;
  }
  *str = '\0';
  str -= strlen(s);
  return str;
}
```
