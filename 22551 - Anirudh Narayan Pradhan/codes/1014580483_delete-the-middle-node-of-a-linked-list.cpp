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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *del=head,*fast=head;
        if(head==NULL || head->next == NULL)
            return NULL;
        while(fast->next && fast->next->next)
        {
            del=del->next;
            fast=fast->next->next;
        }
        
        if(fast->next==NULL)
        {
            del->val=del->next->val;
            del->next=del->next->next;
        }
        else if(fast->next->next==NULL && fast->next)
            del->next=del->next->next;
        return head;

        
    }
};