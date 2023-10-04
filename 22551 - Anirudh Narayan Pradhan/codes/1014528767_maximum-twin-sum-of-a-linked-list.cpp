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
    int pairSum(ListNode* head) {
        stack<int> store;
        int size=0;
        ListNode* ptr=head;
        while(ptr)
        {
            store.push(ptr->val);
            ptr=ptr->next;
            ++size;
        }
        size/=2;
        ptr=head;
        int max=0;
        while(size>-1)
        {
            if((store.top()+ptr->val)>max)
            {
                max=store.top()+ptr->val;
            }
            ptr=ptr->next;
            store.pop();
            --size;
        }
        return max;
    }
};