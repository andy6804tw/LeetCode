# 35. Search Insert Position (Python)

## Problem

The count-and-say sequence is the sequence of integers with the first five terms as following:
```
1.     1
2.     11
3.     21
4.     1211
5.     111221
```
- 1 is read off as "one 1" or 11.
- 11 is read off as "two 1s" or 21.
- 21 is read off as "one 2, then one 1" or 1211.
- Given an integer n, generate the nth term of the count-and-say sequence.

Note: Each term of the sequence of integers will be represented as a string.

**Example 1:**

```
Input: 1
Output: "1"
```

**Example 2:**

```
Input: 4
Output: "1211"
```

##### Solution 1.

這題使用迭代將此次結果累加起來，不用擔心會爆或超時。

- 字串
- Run Time: 27 ms
- 時間複雜度: O(n)
- 空間複雜度: O(1)

```py
class Solution(object):
    def countAndSay(self, n):
        stringList="1"
        if n == 1:
            return "1"
        for i in range(n-1):
            count=1
            newList=""
            for j in range(len(stringList)-1):
                if stringList[j]!=stringList[j+1]:
                    newList=newList+str(count)+stringList[j]
                    count=1
                else:
                    count=count+1
            newList=newList+str(count)+stringList[-1]
            stringList=newList
        return newList    
```
