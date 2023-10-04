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
        if(!head->next) return NULL;
        

        ListNode* p1=head;
        ListNode* p2=head;
        while(p1&& n-1)
        {
            p1=p1->next;
            --n;
        }
        while(p1->next && p1->next->next)
        {
            p1=p1->next;
            // cout<<p2->val<<endl;
            p2=p2->next;
        }
        if(!p1->next)
        {
            head=head->next;
            return head;
        }
        cout<<p2->val;
        if(p2->next)
            p2->next=p2->next->next;
        
        return head;
    }
};