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
    // void remove(ListNode* node)
    // {
    //     if(node->val && node->next&& node->next->val)
    //     {
    //     node->val=node->next->val;
    //     node->next=node->next->next;
    //     }
    // }
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val)
            head=head->next;
        if(head == NULL)
            return head;
        ListNode *temp=head;
        ListNode *temp2;
        bool flag=true;
        while(temp)
        {
            flag=true;
            if(temp->next)  temp2=temp->next;
            if(temp2 && temp2->val == val)  
            { 
                temp->next=temp2->next;
                temp2=NULL;
                flag=false;
            }

            if(flag)    temp=temp->next;
        }
        return head;
    }
};