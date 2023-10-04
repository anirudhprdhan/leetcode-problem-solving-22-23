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
    ListNode* reverse(ListNode* head)
    {
        ListNode *prev=NULL,*curr=head,*nxt=NULL;
        while(curr)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return head=prev;
    }
    ListNode* removeNodes(ListNode* head) {
        if(!head || ! head->next)       return head;
        head=reverse(head);
        ListNode *prev=head;
        ListNode *curr=head->next;
        while(curr)
        {
            while(curr && prev->val>curr->val)
                curr=curr->next;
            prev->next=curr;
            if(!curr)   break;
            prev=prev->next;
            curr=prev->next;
        }
        head=reverse(head);
        return head;
    }
};