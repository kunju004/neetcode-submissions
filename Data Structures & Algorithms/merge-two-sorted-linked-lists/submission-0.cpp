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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ptr1,*ptr2,*ans;
        ptr1=list1;
        ptr2=list2;
        if(list1==NULL and list2!=NULL)
        return list2;

        if(list2==NULL and list1!=NULL)
        return list1;
        if(list1==NULL and list2==NULL)
        return NULL;

      ListNode* h=new ListNode(0);
      ans=h;
        while(ptr1!=NULL and ptr2!=NULL)
        {
          if(ptr1->val<=ptr2->val)
          {
            ans->next=ptr1;
            ptr1=ptr1->next;
            
          }
          else
          {
            ans->next=ptr2;
            ptr2=ptr2->next;
            
          }
          ans=ans->next;
        }
        if(ptr1==NULL and ptr2!=NULL)
        {
          while(ptr2!=NULL)
          {
            ans->next=ptr2;
            ans=ans->next;
            ptr2=ptr2->next;
          }
        }
        if(ptr2==NULL and ptr1!=NULL)
        {
          while(ptr1!=NULL)
          {
            ans->next=ptr1;
            ans=ans->next;
            ptr1=ptr1->next;
          }
        }
        
        return h->next;
    }
};
