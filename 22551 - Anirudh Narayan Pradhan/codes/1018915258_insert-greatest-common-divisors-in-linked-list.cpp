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
    // n1 > n2
    int gcd(int n1, int n2)
    {
        if (n2 != 0)
            return gcd(n2, n1 % n2);
        else 
            return n1;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode *temp1=head,*temp2= head->next;
        
        while (temp2)
        {
            ListNode *ins= new ListNode;
            if(temp1->val > temp2->val)
                ins->val = gcd(temp1->val,temp2->val);
            else
                ins->val = gcd(temp2->val,temp1->val);
            temp1->next = ins;
            ins->next = temp2;

            temp1=temp2;
            temp2=temp2->next;
        }
        return head;
    }
};