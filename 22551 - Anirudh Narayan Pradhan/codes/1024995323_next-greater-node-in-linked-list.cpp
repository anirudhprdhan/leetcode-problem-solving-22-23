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
        vector<int> ans;
        if(!head->next)
        {
            ans.push_back(0);
            return ans;
        }
        ListNode * fast=head->next;
        ListNode * slow=head;
        int count=0;
        bool flag=false;
        while(slow)
        {
            while(fast && fast->val<=slow->val)
            {
                fast=fast->next;
            }
            // cout<<count<<endl;
            if(!fast)
            {
                ans.push_back(0);
                slow=slow->next;
                if(!slow)   break;
                fast=slow->next;
            }
            else
            {
                ans.push_back(fast->val);
                slow=slow->next;
                fast=slow->next;
                }
            //     else
            //     {
            //         while(count)
            //         {
            //             ans.push_back(fast->val);
            //             count-=1;
            //         }
            //         slow=fast;
            //         fast=fast->next;
            //     }
            // }
        }
        return ans;
    }
};