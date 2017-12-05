# 9. Palindrome Number (C Language)

## Problem

Determine whether an integer is a palindrome. Do this without extra space.

**Some hints:**
```
Could negative integers be palindromes? (ie, -1)

If you are thinking of converting the integer to string, note the restriction of using extra space.

You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?

There is a more generic way of solving this problem.
```

##### Solution 1.

題目小提示提到可以利用數字反轉方法來檢查是否為迴文，另外負數不為迴文數字，此外題目很像沒給反轉後會溢未的數所以不用另外判斷是否超出範圍。

- 陣列走訪、暴力
- Run Time: 142 ms
- 時間複雜度: O(log<sub>10</sub>n)
- 空間複雜度: O(1)

```c
bool isPalindrome(int x){
  long tot=0,y=x;
  if(x<0)
    return false;
  while(x!=0){
    tot=tot*10+x%10;
    x/=10;
  }
  if(tot==y)
    return true;
  else
    return false;
}
```
