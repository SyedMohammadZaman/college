#include<iostream>
using namespace std;
void reversestr(string &s,int i,int n) {
    if (i == n / 2){
        return ;
    }
    swap(s[i] , s[n-i-1]);
    reversestr(s, i + 1, n);
        
}

int main(){
    string s = "batman";
    int n = s.size();
   reversestr(s,0,n);
   for(int i = 0;i < n; i++) {
    cout << s[i];
   }
    return 0;
}