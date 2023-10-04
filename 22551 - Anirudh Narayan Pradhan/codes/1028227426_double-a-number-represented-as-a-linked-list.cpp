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
    ListNode* addList(ListNode* head){
        ListNode *temp=head;
        int sum=0;

        bool carry=0;
        while(temp->next)
        {
            sum=temp->val *2 +carry;
            if(sum>9)   carry=1;
            else    carry=0;
            temp->val=sum%10;
            temp=temp->next;
        }
        sum=temp->val *2 +carry;
        if(sum>9)   carry=1;
        else    carry=0;
        temp->val=sum%10; 
        if(carry==1)
        {
            ListNode *node = new ListNode(1,NULL);
            temp->next=node;
        }
        return head;
    }
    ListNode* doubleIt(ListNode* head) {
        if(!head)   return head;
        head=reverseList(head);
        return reverseList(addList(head));

    }
};