class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
      ListNode d(0);
      ListNode*ans=&d;
      int c=0;
      while(l1 || l2 || c){
          if(l1!=NULL){
              c+=l1->val;
              l1=l1->next;
          }
          if(l2!=NULL){
              c+=l2->val;
              l2=l2->next;
          }
       ans->next=new ListNode(c%10);
       c/=10;
       ans=ans->next;
      }  
   return d.next;
        
    }
};
