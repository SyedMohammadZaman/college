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
        for(temp=head;temp<nullptr;temp++){
            cout<< temp->data <<" ";
            temp=temp->next;

        }
    }
    
 node*deletetail(node*head){
       node*temp= head;
   if(head == NULL || head->next==NULL) return NULL;
  while(temp->next->next != NULL){
    temp=temp->next;
  }
  delete temp->next;
  temp->next=NULL;
  return head;
 }

int main(){
    vector<int>arr={1,2,3,4,5,6};
  node*head= convertarray2ll(arr);
   head=deletetail(head);
   print(head) ;
    return 0;
}