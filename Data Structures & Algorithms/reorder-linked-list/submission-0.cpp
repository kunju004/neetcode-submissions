/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
      ListNode* ptr1, *ptr2, *prev, *nxt1,*nxt2;
      ptr1=head;
      prev=NULL;
      ptr2=head;

      while(ptr2->next!=NULL and ptr2->next->next!=NULL)
      {
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
      }
      ptr2=ptr1->next;

      while(ptr2!=NULL)
      {
        nxt2=ptr2->next;
        ptr2->next=prev;
        prev=ptr2;
        ptr2=nxt2;
      }
      ptr1->next=NULL;
      ptr2=prev;
      ptr1=head;
      while(ptr2!=NULL and ptr1!=NULL)
      {
        nxt1=ptr1->next;
        nxt2=ptr2->next;
        ptr1->next=ptr2;
        ptr2->next=nxt1;
        ptr1=nxt1;
        ptr2=nxt2;
        
      }
    }
    
};
