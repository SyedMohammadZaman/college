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
  int searchinLL(node*head , int target){
   node* temp=head;
        while(temp != nullptr){
      if(temp->data == target) return true;
            temp=temp->next;

        }
        return false;
     
    }

int main(){
    vector<int>arr={45,1,2,3,4,5};
  node*head= convertarray2ll(arr);
cout << searchinLL(head , 45);

    return 0;
}