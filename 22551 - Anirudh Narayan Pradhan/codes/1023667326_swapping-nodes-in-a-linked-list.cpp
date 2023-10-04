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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head || !head->next)     return head;
        int len=0;
        ListNode *t1=head;
        while(t1)
        {
            t1=t1->next;
            ++len;
        }
        t1=head;
        ListNode *t2=head;

        len-=k;
        while(k-1)
        {
            t1=t1->next;
            --k;
        }
        while(len)
        {
            t2=t2->next;
            --len;
        }
        int temp=t1->val;
        t1->val=t2->val;
        t2->val=temp;
        return head;
    }
};