# 344-Reverse String

Write a function that takes a string as input and returns the string reversed.

**Example:**

Given s = "hello", return "olleh".


```java
class Solution {
    public String reverseString(String s) {
        return new StringBuffer(s).reverse().toString();
    }
}
```
