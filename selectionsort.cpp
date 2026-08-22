#include<iostream>
using namespace std;
void selectsort(int*arr,int size){
    for(int i=0;i<=size-1;i++){
        int ind=i;
        for(int j=i;j<=size-1;j++){
            if(arr[j]<arr[ind]){
                ind=j;
               
            }
              swap(arr[i],arr[ind]);

        }
       
    }
}

int main(){
     int arr[]={4,3,5,7,9,2};
     int size=6;
     selectsort(arr,6);
     for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<endl;
     }
    return 0;
}