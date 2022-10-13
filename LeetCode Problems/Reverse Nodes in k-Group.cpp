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
    
    ListNode* reverse(ListNode* head, int k, int part, int c){
        
       if(part<c){
         return head;   
       }
        
       ListNode *nex;
       ListNode *prev = NULL;
       ListNode *cur = head;
       int count = 0;
    
      
        
       while(cur && count<k){
           nex = cur->next;
           cur->next = prev;
           prev = cur;
           cur = nex;
           count++;
       }
       if(nex!=NULL)
            head->next = reverse(nex, k, part, c+1);
            
       return prev;
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
       ListNode *temp = head;
       int len = 0;
        
        while(temp){
         len += 1; 
         temp = temp->next;
        }
         
       int part = len/k;
        
       return reverse(head, k, part, 1);    
   
    }
};
