#include<bits/stdc++.h>
using namespace std;
int palindrome(string s){
   int i=0;int j=s.size()-1;
   while(i<=j){
    if(s[i]!=s[j]){
        
         return false;
      }
    i++;
    j--;
    }
   return true;
}
int main() {
    string s="srace1cars";
   int ans= palindrome(s);
   if(ans){
    cout<<"Palindrome";
   }else{
    cout<<"Not  Palindrome";
   }

 
    return 0;
}