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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for(auto list : lists)
        {
            while(list)
            {
                v.push_back(list-> val);
                list = list-> next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* newHead = new ListNode(0);
        ListNode* newTemp = newHead;

        for(int val : v)
        {
            newTemp-> next = new ListNode(val);
            newTemp = newTemp-> next;
        }
        return newHead-> next;
    }
};
