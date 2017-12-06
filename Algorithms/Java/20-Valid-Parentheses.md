# 20. Valid Parentheses (Java)

## Problem

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

##### Solution 1.

這題使用堆疊依序把對應的括號放入容器中，當遇到空堆疊或是該符號不相同時即可回傳 false，注意該字串只有括號而已沒其他字元。

- 堆疊 stack
- Run Time: 11 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```java
class Solution {
    public boolean isValid(String s) {
		Stack<Character> stack = new Stack<Character>();
		for (char c : s.toCharArray()) {
			if (c == '(')
				stack.push(')');
			else if (c == '{')
				stack.push('}');
			else if (c == '[')
				stack.push(']');
			else if (stack.isEmpty() || stack.pop() != c)
				return false;
		}
		return stack.isEmpty();
	}
}
```
