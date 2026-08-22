#include<bits/stdc++.h>
using namespace std;
void insertarr(int pos,int val,int arr[],int n){
    for(int i=n-1;i>=pos;i--){
        
        arr[i+1]=arr[i];
    }
    arr[pos]=val;  
    n=n+1;      
}
int main(){
    int arr[10]={1,5,7,20,40};
     int n=sizeof(arr)/sizeof(arr[0]);
     insertarr(2,100,arr,5);
     
      for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
      }
    return 0;
}