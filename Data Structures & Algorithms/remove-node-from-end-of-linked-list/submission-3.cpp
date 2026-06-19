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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s=0;
        ListNode* ptr;
        ptr=head;
        
      

        while(ptr!=NULL)
        {
          s++;
          ptr=ptr->next;
        }
        
        // cout<<"kp";
      if(s==n)
      
      {
        ptr=head->next;
        head=ptr;
        return head;
      }
// cout<<"kp";
        ptr=head;
        s=s-n;
        for(int i=0;i<s-1;i++)
        {
          ptr=ptr->next;
        }
        // cout<<"kp";
        ListNode* prev;
        ptr->next=ptr->next->next;
        return head;
    }
};
