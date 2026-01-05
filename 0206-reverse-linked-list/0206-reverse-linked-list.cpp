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
    ListNode* reverseList(ListNode* p) {
        ListNode* q=NULL;
        while(p!=NULL)
        {
            ListNode *after=p->next;
            p->next=q;
            q=p;
            p=after;
        }
        return q;
    }
};