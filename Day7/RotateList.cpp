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
int len(ListNode* &head){
    ListNode* temp=head;
    int cnt=0;
    while(temp != NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
  ListNode* rev(ListNode* &head){
      if(head==NULL){
          return NULL;
      }
      if(head->next==NULL){
          return head;
      }
      ListNode* tail=head;
      ListNode* ptail=NULL;
      ListNode* temp=head;
      while(tail->next!= NULL){
          ptail=tail;
          tail=tail->next;
      }
      ptail->next=NULL;
      tail->next=temp;
      ptail=tail;
     head=tail;
      return head;
  }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        return NULL;
        if(k==0)
        return head;
        int n= len(head);
  k=k%n;

      while(k--){
          head=rev(head);
      }
        return head;
    }
};