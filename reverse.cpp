#include<bits/stdc++.h>
using namespace std;                        // recursive approach
void reverse(int i,string &s,int n){
  if(i>=n/2){
    return;
}
swap(s[i],s[n-i-1]);
  reverse(i+1,s,n);
}
int main() {
    string s="12345";
    int n=s.size();
    reverse(0,s,n);
    for(auto x : s){
        cout<<x<<" ";
    }
   
    return 0;
}