// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *dummy=head;
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
    
    bool isPalindrome(Node *head)
    {
        //Your code hereNode* slow=head;
        Node*fast=head;
        Node*slow=head;
        if(head==NULL ||head->next==NULL)
        return  1;
        if(head->next->next==NULL)
        {
            if(head->data==head->next->data)
            return 1;
            else
            return 0;
        }
        
        while( fast->next!=NULL )
        {
            slow=slow->next;
            if(fast->next->next==NULL)
            break;
            fast=fast->next->next;
        }
        slow=reverseList(slow);
        Node*ptr=head;
        while(slow!=ptr)
        {
            if(ptr->data!=slow->data)
            return 0;
            ptr=ptr->next;
            slow=slow->next;
        }
        return 1;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends