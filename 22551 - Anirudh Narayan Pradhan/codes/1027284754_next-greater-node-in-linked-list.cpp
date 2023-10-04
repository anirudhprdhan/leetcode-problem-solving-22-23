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
    vector<int> nextLargerNodes(ListNode* head) {
        int l=0;
        if(!head)   return {0}; // if there are no nodes in the list
        if(!head->next) // if there is only one node in the list
        {
            return {0};
        }
        ListNode *temp=head;

        while(temp)
        {
            temp=temp->next;
            ++l;
        }
        vector<int> ans(l);
        stack<pair<int,int>> stk;
        int i=0;
        temp=head;

        stk.push({temp->val,i});
        temp=temp->next;
        while(temp && !stk.empty())
        {
            ++i;
            while(!stk.empty() && stk.top().first < temp->val)
            {
                ans[stk.top().second]=temp->val;
                stk.pop();
            }
            stk.push({temp->val,i});
            temp=temp->next;
        }
        while(!stk.empty())
        {
            ans[stk.top().second]=0;
            stk.pop();
        }
        return ans;
    }
};