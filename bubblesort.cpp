#include<bits/stdc++.h>
using namespace std;
int bubblesort(int n,int arr[]){
    for(int i=1;i<n;i++){
       for(int j=0;j<n;j++){
     if(arr[j]>arr[i]){
            swap(arr[i],arr[j]);
        } 
       }
        
        
        
    }
    
}
int main(){
    int arr[]={2,13,7,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
   bubblesort(5,arr);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }
    return 0;
}