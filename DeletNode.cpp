/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) 
    {
         ListNode *p = node->next;
        while(p!=NULL){
            if(p->next==NULL){
                node->val = p->val;
                node->next = NULL;
                p = p->next;
            }
            else{
                node->val = p->val;
                node = p;
                p = p->next;
            }
            
        }    
        
    }
};