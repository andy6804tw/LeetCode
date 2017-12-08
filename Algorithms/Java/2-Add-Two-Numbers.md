#  2. Add Two Numbers (Java)

## Problem

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

**Example**
```
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
```

##### Solution 1.

這題簡單來說就是兩數相加，往右邊進位的問題，由於 l1=5 l2=5 會輸出 [1,0] 所以要加 carry!=0 判斷式來檢查最後的溢位 。

- 鏈結串列走訪
- Run Time:	49 ms
- 時間複雜度: O(max(l1, l2))
- 空間複雜度: O(max(l1, l2))

```java
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
       ListNode list = new ListNode(0);
        ListNode head = list;
        int carry=0;
        while(l1!=null||l2!=null||carry!=0) {
        		int tot=((l1==null)?0:l1.val)+((l2==null)?0:l2.val)+carry;
        		carry=tot/10;
        		ListNode temp = new ListNode(tot%10);
        		list.next=temp;
        		list=list.next;
        		l1=(l1==null)?l1:l1.next;
        		l2=(l2==null)?l2:l2.next;
        }
        return head.next;
    }
}
```
