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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)    return head;
        ListNode *slow=head;
        ListNode *fast=head;
        int l=0;
        while(slow)
        {
            ++l;
            slow=slow->next;
        }
        if(k>=l)
            k=k%l;
        if(k==0)    return head;
        slow=head;
        while(k)
        {
            fast=fast->next;
            --k;
        }
        while(fast->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        ListNode *new_head=slow->next;
        fast->next=head;
        slow->next=NULL;
        return new_head;

    }
};