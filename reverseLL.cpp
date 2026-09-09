#include<bits/stdc++.h>
using namespace std;
class node{
    public:
   int data;
      node*next;

   public:
   node(int val){
    data = val;
    next = nullptr;
    
   }
};

 node* convertarray2ll(vector<int>&arr){
        node*head=new node(arr[0]);
        node*mover=head;
        for(int i=1;i<arr.size();i++){
            node*temp=new node(arr[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;
    }
     void print(node*head){
     node* temp=head;
       while(temp != nullptr){
            cout<< temp->data <<" ";
            temp=temp->next;

        }
    }
    
 node*reverseLL(node*head){
  node*prev=NULL;
  node*curr=head;
  node*temp=NULL;
  while(curr->next != nullptr){
   temp=curr->next;
   curr->next=prev;
   prev=curr;
   curr=temp;
  }
  return curr;
 }

int main(){
    vector<int>arr={1,2,3,4,5,6};
  node*head= convertarray2ll(arr);
   node *ans=reverseLL(head);
  print(ans);
    return 0;
}