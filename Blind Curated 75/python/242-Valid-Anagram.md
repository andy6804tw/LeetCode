# 242. Valid Anagram (Python)

## Problem

Given two strings s and t, write a function to determine if t is an anagram of s.

For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.

Note:
You may assume the string contains only lowercase alphabets.

Follow up:
What if the inputs contain unicode characters? How would you adapt your solution to such case?

##### Solution 1.
這種方法比較算是徒法煉鋼，首先建立一個字母 list。接著迴圈走訪 26 個字母並依序的對兩個輸入字串透過 count() 計算該字串中某字母的出現次數。最後再比較 sList 與 tList 兩個計數的串列是不是長得一樣。

- 字串處理
- Run Time: 19 ms

```py
class Solution(object):
    def isAnagram(self, s, t):
        AtoZ = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
        sList=[0]*26
        tList=[0]*26
        if(len(s)!=len(t)):
            return False
        for i in range(len(AtoZ)):
            sList[i]=s.count(AtoZ[i])
            tList[i]=t.count(AtoZ[i])
        if sList==tList:
            return True
        else:
            return False
        
```

##### Solution 2.
這種方法算是利用 Python 內建方法直接將字串進行 sorted() 排序，將會回傳一個字元 list。最後再透過判斷式比較兩個 list 內容是否一樣。

- 字串處理
- Run Time: 122 ms

```py
class Solution(object):
    def isAnagram(self, s, t):
        return sorted(t) == sorted(s)
```
