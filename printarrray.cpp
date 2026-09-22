#include<iostream>
using namespace std;
void printarr(int i,int arr[],int n) {
    if (i == n){
         return ;
    }else{
         cout << arr[i] << endl;
      printarr (i+1,arr,n);
    }
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printarr(0,arr,n); 
    return 0;
}