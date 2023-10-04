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
    bool isPalindrome(ListNode* head) {
        stack<ListNode*> store;
        ListNode* ptr=head;
        while (ptr)
        {
            store.push(ptr);
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr && store.top()->val==ptr->val)
        {
            ptr=ptr->next;
            store.pop();
        }
        if(store.empty())
            return 1;
        return 0;
    }
};