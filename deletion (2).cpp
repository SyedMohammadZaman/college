#include<iostream>
#include<vector>
using namespace std;
void deletion(int pos,int arr[],int n){
    for(int i=pos;i<=n;i++){
        arr[i]=arr[i+1];
        
    }
   
    n=n-1;
}
int main(){
   int arr[]={2,3,4,5,6,1};
        int n=sizeof(arr)/sizeof(arr[0]);
         int pos;
        cin>>pos;
        
       deletion(pos,arr,6);
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
    return 0;
}