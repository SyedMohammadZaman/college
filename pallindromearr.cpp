#include<bits/stdc++.h>
using namespace std;
int pall(int i,vector<int>&arr,int n) {
    if (i >= n/2){
         return true;
    }
    if(arr[i] != arr[n-i-1]){
        return false;     
}
pall(i+1,arr,n);
}
int main(){
    vector<int>arr = {1,2,3,2,1};
    int n = arr.size();
 cout <<  pall(0,arr,n);
    return 0;
}