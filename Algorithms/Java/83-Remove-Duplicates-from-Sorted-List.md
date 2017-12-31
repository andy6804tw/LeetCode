# 83. Remove Duplicates from Sorted List (Java)

## Problem

Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.



##### Solution 1.

類似 map 實作，串列中重複的捨去僅保留一個，所以用節點走訪方式，目前的值等於下一個結點的值時，目前節點的 next 就往前位移。

- 鏈結串列
- Run Time: 1 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

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
    public ListNode deleteDuplicates(ListNode head) {
        ListNode list=head;
        while(head != null&&list.next!=null) {
        		if(list.val==list.next.val) {
        			list.next=list.next.next;
        		}else {
        			list=list.next;
        		}
        }
        return head;
    }
}
```
