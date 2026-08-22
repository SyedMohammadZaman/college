#include<bits/stdc++.h>
using namespace std;
int binarysearch(int target,int n,int *arr){
    int start=0;
    int end=n-1;
   
    while(start<=end){
 int mid=start+(end-start)/2;
      
            if(target>arr[mid]){
                start=mid+1;
                  }else if(target<arr[mid]){
                end=mid-1;
            }else{
                return mid;

            }
    }
        
        
    
    return -1;
}
int main(){
    int arr[]={1,5,7,8,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
  int index= binarysearch(9,6,arr);
  if(index!=-1){
    cout<<index<<endl;
  }else{
    cout<<"target does not exist";
  }
    return 0;
}