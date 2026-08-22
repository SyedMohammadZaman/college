#include<iostream>
using namespace std;
int linearsearch(int target,int n,int *arr){
    
    for(int i=0;i<=n-1;i++){
        if(arr[i]==target){
            return i;
        }
      

    }
      return false;
}
int main(){
    int arr[]={2,1,4,3,7,9,5};
    int n=sizeof(arr)/sizeof(arr[0]);
  int index= linearsearch(10,7,arr);
  if(index!=false){
    cout<<index<<"  thank you"<<endl;
  }else{
    cout<<"target doest not exist"<<"  thankyou"<<endl;
  }
    

  return 0;
}
  
