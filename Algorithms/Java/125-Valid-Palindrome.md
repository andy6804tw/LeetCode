#  125. Valid Palindrome (Java)

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
- Run Time: 11 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```java
class Solution {
    public boolean isPalindrome(String s) {
       char arr[]=s.toLowerCase().toCharArray();
        StringBuffer str=new StringBuffer();
        for(int i=0;i<arr.length;i++) {
        	if(arr[i]>='a'&&arr[i]<='z'||arr[i]>='0'&&arr[i]<='9')
        		str.append(arr[i]);
        }
        	return str.toString().equals(str.reverse().toString());
    }
}
```

##### Solution 2.

此方法使用 `replaceAll` 搭配正規表示法將英文字母和數字以外字元取代為空字串，最後再使用 `StringBuffer` 字串翻轉 `reverse()` 與未翻轉做比對，記得字串比對要轉為一般 `String` 型態。

- 字串處理
- Run Time: 33 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```java
public boolean isPalindrome(String s) {
    		String str=new StringBuffer(s.toLowerCase().replaceAll("[^a-z0-9]", "")).toString();
    		String reverseString=new StringBuffer(str).reverse().toString();
        return str.equals(reverseString);
    }
```
