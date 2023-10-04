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
    ListNode* reverseList(ListNode* head) {
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
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next)   return;

        int l=0;
        ListNode *curr=head;
        ListNode* second;
        while(curr)
        {
            ++l;
            curr=curr->next;
        }
        curr=head;
        for (int i=0;curr && i<(l/2);++i)
        {
            curr=curr->next;
        }

        second=curr->next;

        curr->next=NULL;

        second=reverseList(second);

        curr=head;
        ListNode *temp;
        while(curr && second)
        {
            temp=second->next;
            second->next=curr->next;            
            curr->next=second;
            second=temp;
            curr=curr->next->next;
        }

        // while()

    }
};