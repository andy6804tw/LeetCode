# 83. Remove Duplicates from Sorted List (C Language)

## Problem

Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.



##### Solution 1.

串列中重複的捨去僅保留一個，所以用節點走訪方式，目前的值等於下一個結點的值時，目前節點的 next 就往前位移，記得 C語言在每次新增節點時要配置記憶體位置。

- 鏈結串列
- Run Time: 3 ms
- 時間複雜度: O(n)
- 空間複雜度: O(n)

```c
struct ListNode *deleteDuplicates(struct ListNode *head){
  struct ListNode *list=head;
  while (list != NULL && list->next != NULL){
    if (list->val == list->next->val){
      list->next = list->next->next;
    }else{
      list = list->next;
    }
  }
  return head;
}
```

- 完整程式碼

```c
#include < stdlib.h >
  struct ListNode {
    int val;
    struct ListNode * next;
  };
struct ListNode * deleteDuplicates(struct ListNode * head);
int main() {
  struct ListNode * list1 = (struct ListNode * ) malloc(sizeof(struct ListNode));
  struct ListNode * list2 = (struct ListNode * ) malloc(sizeof(struct ListNode));
  struct ListNode * list3 = (struct ListNode * ) malloc(sizeof(struct ListNode));
  struct ListNode * list4 = (struct ListNode * ) malloc(sizeof(struct ListNode));
  struct ListNode * list5 = (struct ListNode * ) malloc(sizeof(struct ListNode));
  list1 - > val = 1;
  list1 - > next = list2;
  list2 - > val = 1;
  list2 - > next = list3;
  list3 - > val = 2;
  list3 - > next = list4;
  list4 - > val = 3;
  list4 - > next = list5;
  list5 - > val = 3;
  list5 - > next = NULL;
  struct ListNode * head = deleteDuplicates(list1);
  while (head != NULL) {
    printf("%d->", head - > val);
    head = head - > next;
  }
}
struct ListNode * deleteDuplicates(struct ListNode * head) {
  struct ListNode * list = head;
  while (list != NULL && list - > next != NULL) {
    if (list - > val == list - > next - > val) {
      list - > next = list - > next - > next;
    } else {
      list = list - > next;
    }
  }
  return head;
}
```
