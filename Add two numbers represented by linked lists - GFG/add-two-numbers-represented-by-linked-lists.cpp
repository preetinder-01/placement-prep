// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *dummy=NULL;
        Node *nextnode=head;
        Node*ptr=head;
        while(nextnode!=NULL)
        {
            nextnode=nextnode->next;
            ptr->next=dummy;
            dummy=ptr;
            ptr=nextnode;
        }
        head=dummy;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node* head1=reverseList(first);
        Node* head2=reverseList(second);
        int carry=0,add;
        Node*newhead=new Node(0);
        Node*ptr=newhead;
        while(head1!=NULL ||head2!=NULL)
        {
            add=carry;
            if(head1!=NULL)
            {
                add+=head1->data;
                head1=head1->next;
            }
            if(head2!=NULL)
            {
                add+=head2->data;
                head2=head2->next;
            }
            Node *newnode =new Node(add%10);
            carry=add/10;
            ptr->next=newnode;
            ptr=ptr->next;
            
        }
        if(carry)
        {
            Node *newnode=new Node(carry);
            ptr->next=newnode;
        }
        newhead=newhead->next;
        return reverseList(newhead);
        
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends