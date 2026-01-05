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
    int Length(ListNode*head)
    {
        int n=0;
        while(head!=NULL)
        {
            n++;
            head=head->next;
        }
        return n;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=Length(head);
        n=len-n+1;
        if(n==1)
        {
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode *q=NULL;
        ListNode *p=head;
        int pos=1;
        while(pos!=n)
        {
            q=p;
            p=p->next;
            pos+=1;
        }
        q->next=p->next;
        p->next=NULL;
        delete p;
        return head;
    }
};