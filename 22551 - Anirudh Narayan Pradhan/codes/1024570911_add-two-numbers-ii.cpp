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
    stack<int> summ(stack<int> l1 , stack<int> l2)
    {
        int sum=0;
        bool carry = false;
        stack<int> ans;

        while(!l2.empty())
        {
            sum=l1.top()+l2.top()+carry;
            l1.pop();
            l2.pop();
            carry=0;
            if(sum>9)   carry=1;
            ans.push(sum%10);
        }
        // if carry is true
        while(carry)
        {
            if(!l1.empty())
            {
                sum=l1.top()+carry;
                l1.pop();
                carry=0;
                if(sum>9) carry=1;
                ans.push(sum%10);
            }
            else
            {
                ans.push(carry);
                carry=0;
            }
        }
        // if carry is false and longer list is not empty
        while(!l1.empty())
        {
            ans.push(l1.top());
            l1.pop();
        }
        return ans;
    }
    void backToList(ListNode* l2 , stack<int> ans)
    {
        while(l2)
        {
            l2->val=ans.top();
            ans.pop();
            if(!l2->next)   break;
            l2=l2->next;
        }
        while(!ans.empty())
        {
            ListNode *neww= new ListNode;
            neww->val=ans.top();
            ans.pop();
            neww->next=NULL;
            l2->next=neww;
            l2=l2->next;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1=l1;
        ListNode *t2=l2;
        stack<int> li1,li2,ans;

        while(t2)
        {
            li2.push(t2->val);
            t2=t2->next;
        }
        while(t1)
        {
            li1.push(t1->val);
            t1=t1->next;
        }
        if(li2.size()>li1.size())
        {
            t2=l2;
            ans= summ(li2,li1);
            backToList(t2,ans);
            return l2;            
        }
        t1=l1;
        ans= summ(li1,li2);
        backToList(t1,ans);
        return l1;

    }
};