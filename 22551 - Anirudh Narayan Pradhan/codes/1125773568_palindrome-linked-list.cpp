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
    bool isPalindrome(ListNode* head) {
        ListNode* t1,*t2,*t3;
        t1=head;
        t2=head;
        while(t2 && t2->next)
        {
            t1=t1->next;
            t2=t2->next->next;
        }
        t2=t1->next;
        t1->next=NULL;
        while(t2)
        {
            t3=t2->next;
            t2->next=t1;
            t1=t2;
            t2=t3;
        }
        t2=t1;
        t1=head;
        while(t2)
        {
            if(t2->val!=t1->val)
                return false;
            t1=t1->next;
            t2=t2->next;
        }
        return true;
    }
};