# 344-Reverse String (Java)

## Problem

Write a function that takes a string as input and returns the string reversed.

**Example:**

Given s = "hello", return "olleh".


##### Solution 1.

將String 字串轉為 StringBuffer 類別型態，並使用裡面的 reverse() 方法。

- StringBuffer 類別型態
- Run Time: 4 ms
- 時間複雜度 O(1)
- 空間複雜度 O(1)

```java
class Solution {
    public String reverseString(String s) {
        return new StringBuffer(s).reverse().toString();
    }
}
```
