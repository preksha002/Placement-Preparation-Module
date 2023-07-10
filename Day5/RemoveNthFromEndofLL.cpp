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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int c=0;
        ListNode* temp=head;
        while(temp)
        {
            c++;
            temp=temp->next;
        }
        if(c==n)
        return head->next;
        temp=head;
        int p=1;
        while(p<c-n)
        {
            temp=temp->next;
            p++;
        }
        temp->next=temp->next->next;
        return head;
        
    }
};