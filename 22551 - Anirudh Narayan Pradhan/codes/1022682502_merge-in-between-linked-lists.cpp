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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * temp1 = list1;
        ListNode * temp2;
        int i;
        for (i=0;i<a-1;i++)
            temp1=temp1->next;
        temp2 = temp1->next;
        temp1->next = list2;

        // Get the list2 to the end of the list
        while(list2 && list2->next)
            list2= list2->next;

        // get the pointer to the bth node
        for ( ;temp2 && i < b-1; ++i)
            temp2 = temp2->next;
        
        list2->next = temp2->next;
        return list1;
        

    }
};