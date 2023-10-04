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
    ListNode* mergeNodes(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode * temp=head->next;
        ListNode *h=head;
        int sum=0;
        while(temp)
        {
            while(temp&&temp->val!=0)
            {
                sum+=temp->val;
                h->next=h->next->next;
                temp=h->next;
            }
            temp->val=sum;
            sum=0;
            h=h->next;
            temp=h->next;
        }
        head=head->next;
        return head;

    }
};