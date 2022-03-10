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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL ||head->next==NULL)
            return head;
        // if()
        ListNode*l1=new ListNode(-101);
        l1->next=head;
        ListNode*l2=l1;
        // loop till next and next->next !NULL as we wi;ll use temp to compare next two elemenst 
        while(l2->next!=NULL && l2->next->next!=NULL)
        {
//             if equal 
            if(l2->next->val==l2->next->next->val)
            {
//                 get second same elem in temp
                ListNode*temp=l2->next->next;
//                 until temp== first same 
                while(temp!=NULL&& l2->next->val==temp->val)
                {
                    // delete temp
                    ListNode*anotemp=temp;
                    temp=temp->next;
                    delete anotemp;
                }
//                 deleted duplicates now delete first one elem
                l2->next=temp;;
            } 
            else{
            l2=l2->next;}
            
        }
        return l1->next;
    }
};