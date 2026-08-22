#include<bits/stdc++.h>
 using namespace std;                //recursive approach

 int fibonacci(int n){
    if(n==0 || n==1) return n;

    return fibonacci(n-1)+fibonacci(n-2);
 }
  int main(){
   int n;
   cin>>n;
   cout<<fibonacci(n);
    return 0;
  }