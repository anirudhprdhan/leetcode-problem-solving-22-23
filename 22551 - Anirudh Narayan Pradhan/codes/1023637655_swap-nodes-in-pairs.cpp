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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *t1=head;
        ListNode *t2=head->next;
        ListNode *t3;

        t1->next=t2->next;
        t2->next=t1;
        head=t2;

        t3=t1;
        t1=t1->next;
        if(!t1 || !t1->next)   return head;
        t2=t1->next;
        while(t2)
        {
            t3->next= t2;
            t1->next= t2->next;
            t2->next=t1;
            t3=t1;
            t1=t1->next;
            if(!t1)
                break;
            t2=t1->next;
        }
        
        
        return head;
    }
};