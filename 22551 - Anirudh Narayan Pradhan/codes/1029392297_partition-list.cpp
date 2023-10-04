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
    ListNode* partition(ListNode* head, int x) {
        ListNode* less=new ListNode(0);
        ListNode* greater=new ListNode(0);
        
        ListNode * curr = head;
        ListNode *t1 = less;
        ListNode* t2 = greater;

        while(curr)
        {
            if(curr->val < x)
            {
                t1->next=curr;
                curr=curr->next;
                t1=t1->next;
            }
            else
            {
                t2->next=curr;
                curr=curr->next;
                t2=t2->next;
            }            
        }
        t1->next= greater->next;
        t2->next=NULL;
        return less->next;
    }
};