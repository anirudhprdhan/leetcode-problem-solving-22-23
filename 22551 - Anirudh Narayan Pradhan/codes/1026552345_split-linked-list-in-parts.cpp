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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int l=0,i;
        ListNode *run=head;
        ListNode *put;
        vector<ListNode*>ans(k);
        while(run) // order length of list
        {
            run=run->next;
            ++l;
        }
        run=head;
        // in case length is less than k, we need to put single entry for each entry of the array
        if(k>l)
        {
            for(i=0;i<k && run;++i) // order length of list
            {
                ans[i]=run;
                put=run;
                run=run->next;
                put->next=NULL;
                // ans[i]->next=NULL;
            }
            return ans;
        }



        // in case k is less than length, we need to put min of l/k 
        int num_list=l/k; //min number of elements in each entry
        int rem = l%k; // the first few of the elements will have 1 extra node
        // int iterate_array=0;
        for(i=0; i<k;++i)
        {
            ans[i]=head;
            for(int j=1;j<num_list && head;++j)
            {
                head=head->next;
            }

            if(rem) 
            {
                head=head->next;
                --rem;
            }
            put=head;
            if(head)

            {head=head->next;
            put->next=NULL;}
        }
        return ans;

    }
};