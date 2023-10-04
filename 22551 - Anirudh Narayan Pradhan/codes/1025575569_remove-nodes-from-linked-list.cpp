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
        ListNode* t1;
        ListNode* t2;
        ListNode* t3;
        if(head==NULL || head->next==NULL)
            return head;
        else if(head->next->next==NULL)
        {
            t1=head;
            head=head->next;
            head->next=t1;
            t1->next=NULL;
            return head;
        }
        t1=head;
        t2=head->next;
        t3=t2->next;
        t1->next=NULL;
        while (t3!=NULL)
        {
            t2->next=t1;
            t1=t2;
            t2=t3;
            t3=t3->next;
        }
        t2->next=t1;
        return t2;
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