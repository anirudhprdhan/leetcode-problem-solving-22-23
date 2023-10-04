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
    ListNode* summ(ListNode *li1 , ListNode *li2)
    {
        ListNode * head=li1;
        int sum=0;
        bool carry = false;
        while(li2)
        {
            sum = li1->val + li2->val + carry;
            if(sum>9)
                carry =1;
            else
                carry =0;
            li1->val = sum%10;
            li2=li2->next;
            if(!li2)
                break;
            li1=li1->next;
        }
        while(li1 && li1->next)
        {
            li1=li1->next;
            if(carry)
            {
                sum=li1->val +carry;
                if(sum >9) carry =1;
                else carry =0;
                li1->val=sum%10;
            }
            // li1=li1->next;
        }
        
        if(carry)
        {
            ListNode *neww = new ListNode;
            neww->val=carry;
            neww->next = li1->next;
            li1->next = neww;
        }
        return head;
    }

    ListNode* reverse(ListNode * head)
    {
        ListNode* t1;
        ListNode* t2;
        ListNode* t3;
        if(head==NULL || head->next==NULL)
            return head;
        else if(head->next->next==NULL)
        {
            t1=head;
            head=head->next;
            head->next=t1;
            t1->next=NULL;
            return head;
        }
        t1=head;
        t2=head->next;
        t3=t2->next;
        t1->next=NULL;
        while (t3!=NULL)
        {
            t2->next=t1;
            t1=t2;
            t2=t3;
            t3=t3->next;
        }
        t2->next=t1;
        return t2; 
    }
    ListNode* addFromFront(ListNode* l1,ListNode* l2)
    {
        ListNode *t1=l1;
        ListNode *t2=l2;
        int i=0,j=0;
        while(t1)
        {
            t1=t1->next;
            ++i;
        }
        while(t2)
        {
            t2 = t2->next;
            ++j;
        }
        if(i>j)
            return summ(l1,l2);
        return summ(l2,l1);
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        return reverse(addFromFront(l1,l2));
    }
};