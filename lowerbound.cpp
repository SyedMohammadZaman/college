#include<iostream>
using namespace std;
int lowerbound(int arr[],int target,int n){
    int st=0;
    int end=n-1;
    int lowbound=n;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>=target){
             lowbound=mid;

             end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return lowbound;
}
int main(){
int arr[]={1,2,3,3,5,8,8,10,10,11};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<lowerbound(arr,5,n);

    return 0;
}