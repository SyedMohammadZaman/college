#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node*next;
    node*back;

    node(int val ,node *next1 ,node *back1) {
        data = val;
        next = next1;
        back = back1;;
    }
    public:
    node( int val) {
        data = val;
        next = nullptr;
        back = nullptr;
       
    }
  
};

node *convertarrtoLL (vector<int> &arr ) {
    node*head = new node(arr[0]);
    node *prev = head;
    for (int i=1 ;i<arr.size() ;i++) {
        node *temp = new node(arr[i] , nullptr ,prev);
        prev->next = temp;
        prev = temp;

    }
    return head ;

}
void print (node *head) {
    node *traverse = head;
   while (traverse != NULL) {
        cout << traverse->data <<" ";
        traverse = traverse->next;
    }
}
int main() {
    vector<int>arr= {1,2,3,4,5};
    node *head = convertarrtoLL(arr);
    print (head);
    return 0;
}