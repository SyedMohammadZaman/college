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
    int lengthofLL(node* head){
        int count=0;
        node* temp=head;
        while(temp != nullptr){
            temp=temp->next;
            count++;
        }
        return count;
    }

int main(){
    vector<int>arr={45,1,2,3,4,5};
  node*head= convertarray2ll(arr);
node* temp=head;
cout << lengthofLL(head);


    return 0;
}