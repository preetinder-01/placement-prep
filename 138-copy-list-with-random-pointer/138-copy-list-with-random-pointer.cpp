/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *curr=head,*temp;
        if(head==NULL)
            return head;
        while(curr) // traverse and create a copy 
        {
            temp=curr->next;
            curr->next=new Node(curr->val);
            curr->next->next=temp;
            curr=temp;
        }
        // now traverse and got random copying
        curr=head;
        while(curr)
        {
            if(curr->next)  // tio check for NULL or last NODE
                // if curr->random is NULL i.e. our copied NODE the point to copy of copy of random 
                // random->next is copy of random 
                curr->next->random=curr->random?curr->random->next:curr->random;
            
            curr=curr->next?curr->next->next:curr->next;
        }
        Node *original=head;
        Node* copy=head->next;
        temp=copy;
        // separate original and copy LL
        while(original &&copy)
        {
             original->next =
         original->next? original->next->next : original->next;
 
        copy->next = copy->next?copy->next->next:copy->next;
        original = original->next;
        copy = copy->next;
        }
        return temp;
    }
};