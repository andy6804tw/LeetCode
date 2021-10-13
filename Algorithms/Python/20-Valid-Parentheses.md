# 20. Valid Parentheses (Python)

## Problem

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

##### Solution 1.

這題使用堆疊依序把對應的括號放入容器中，當遇到空堆疊或是該符號不相同時即可回傳 false，注意該字串只有括號而已沒其他字元。

- 堆疊 stack
- Run Time: 40 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```py
class Solution:
    def isValid(self, s: str) -> bool:
        table={'(':')',
              '{':'}',
              '[':']'}
        stack = []
        for c in s:
            if c in table:
                stack.append(table[c])
            elif not stack or stack.pop()!=c:
                return False
        return True if len(stack) == 0 else False
```
