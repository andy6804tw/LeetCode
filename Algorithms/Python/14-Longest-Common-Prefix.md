# 20. Valid Parentheses (Python)

## Problem

Write a function to find the longest common prefix string amongst an array of strings.

##### Solution 1.

這題是要尋找最長共同字首，以第一個單字為基準，對剩餘的單字從第一個字元開始搜尋每次一個比對字元下去搜索該字元是否存在於該字串中。當不吻合時即退出迴圈。

- List
- Runtime: 49 ms
- 時間複雜度: O(S) , where S is the sum of all characters in all strings.
- 空間複雜度: O(1)

```py
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0: return ""
        maxnum=len(strs[0])
        for i in range(1,len(strs)):
            count=0
            for j in range(len(strs[i])):
                if j>=len(strs[0]):
                    break
                if strs[0][j]==strs[i][j]:
                    count+=1
                else:
                    break
            if maxnum>count:
                maxnum=count
        return strs[0][:maxnum]
```

##### Solution 2.
這種方法是透過擷取子字串依序與每個單字進行 `find()` 搜索。

- Runtime: 57 ms

```py
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0: return ""
        for i in range(len(strs[0])):
            matchStr = strs[0][0:i+1]
            for j in range(len(strs)):
                if strs[j].find(matchStr) != 0:
                        return strs[0][0:i]
        return strs[0]
```