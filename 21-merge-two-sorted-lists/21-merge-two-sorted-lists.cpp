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
    ListNode* merge(ListNode* head1, ListNode* head2)
    {
        if(head1 == NULL) // if head1 becomes null, means if it stands on last position
        {
            return head2; // from here simply return head2
        }
            
        if(head2 == NULL) // if head2 becomes null, means if it stands on last position
        {
            return head1; // from here simply return head1
        }
            
        ListNode* temp; // temp pointer to make links
        
            if(head1 -> val <= head2 -> val) // if head1 <= head2
            {
                temp = head1; // put head1 in our answer
                
                          // and now move our head1 
                temp -> next = merge(head1 -> next, head2);
                
            }
            else // else
            {
                temp = head2; // put head in our answer
                
                                  // and now move our head2
                temp -> next = merge(head1, head2 -> next);
            }
        
        return temp; // finally return temp
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL )
            return NULL;
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        
        return merge(list1,list2);
    }
};