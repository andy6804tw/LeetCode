#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
  int val;
  struct ListNode *next;
};
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2);
typedef struct ListNode ListNode;
int main()
{
  ListNode l1;
  ListNode l2;
  ListNode l3;
  ListNode l4;
  ListNode l5;
  ListNode l6;
  ListNode *head,*list1=&l1,*list2=&l4;
  l1.val=2;
  l2.val = 4;
  l3.val = 3;
  l4.val = 5;
  l5.val = 6;
  l6.val = 4;
  l1.next = &l2;
  l2.next = &l3;
  l3.next=NULL;
  l4.next = &l5;
  l5.next = &l6;
  l6.next = NULL;
  head = addTwoNumbers(list1,list2);
  while (head != NULL)
  {
    printf("%d ", head->val);
    head = head->next;
  }
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2){
  ListNode *head = NULL, *list = NULL;
  int carry=0;
  //head = list;
  while(l1!=NULL||l2!=NULL||carry!=0){
    int tot = ((l1 == NULL) ? 0 : l1->val) + ((l2 == NULL) ? 0 : l2->val) + carry;
    carry=tot/10;
    ListNode temp;
    temp.val=tot%10;
    if(list==NULL){
      list = &temp;
      head = list;
    }
    else
      list->next = &temp;
    //printf("%d  ",tot%10);
    l1=(l1==NULL)?NULL:l1->next;
    l2 = (l2 == NULL) ? NULL : l2->next;
  }
  list->next = NULL;
  return head;
}
