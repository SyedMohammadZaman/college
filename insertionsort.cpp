#include<iostream>
using namespace std;
void insertsort(int *arr,int size){
    for(int i=1;i<size;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
            }
        }
    

int main(){
    int arr[]={4,1,2,8,5,3};
    int size=6;
    insertsort(arr,6);
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}