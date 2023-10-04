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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        ListNode* temp3 = head;
        bool flag_del = false;
        while(temp2)
        {
            while(temp1 && temp2 && temp1->val == temp2->val)
                {
                    temp2 = temp2->next;
                    flag_del= true;
                }
            if(flag_del)
            {
                // delete temp1
                if(temp3==head)
                {
                    if(!temp2 )
                    {
                        if(temp3->val == temp3->next->val)
                        {
                            head = temp2;
                            return head;
                        }
                        temp3->next = temp2;
                        return head;
                    }
                    temp1->val = temp2->val;
                    temp1->next=temp2->next;
                    temp2=temp2->next;
                }
                else
                {
                    temp3->next = temp2;
                    temp1=temp3->next;
                    if(!temp1 || !temp1->next)
                        return head;
                    else
                        temp2=temp1->next;
                }
                flag_del = false;
            }
            else
            {
                if(temp1 && temp3 != temp1)
                {
                    temp3=temp3->next;
                }   
                temp1=temp1->next;
                temp2=temp2->next;             
            }
        }
        return head;


    }
};