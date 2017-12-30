#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
struct ListNode
{
  int val;
  struct ListNode *next;
};

struct ListNode *deleteDuplicates(struct ListNode *head);
int main()
{
  struct ListNode *list1 = (struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode *list2 = (struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode *list3 = (struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode *list4 = (struct ListNode *)malloc(sizeof(struct ListNode));
  struct ListNode *list5 = (struct ListNode *)malloc(sizeof(struct ListNode));
  list1->val=1;
  list1->next=list2;
  list2->val=1;
  list2->next=list3;
  list3->val=2;
  list3->next = list4;
  list4->val = 3;
  list4->next = list5;
  list5->val = 3;
  list5->next = NULL;
  struct ListNode *head=deleteDuplicates(list1);
  while (head != NULL)
  {
    printf("%d->",head->val);
    head=head->next;
  }
}
struct ListNode *deleteDuplicates(struct ListNode *head){
  struct ListNode *list = head;
  while (list != NULL && list->next != NULL)
  {
    if (list->val == list->next->val)
    {
      list->next = list->next->next;
    }
    else
    {
      list = list->next;
    }
  }
  return head;
}
