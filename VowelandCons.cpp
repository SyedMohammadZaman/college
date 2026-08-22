#include<bits/stdc++.h>
using namespace std;                        
void count(string s){
 int vowel=0;
 int consonent=0;
 for(int i=0;i<s.size();i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' || s[i]=='A' ){
        vowel++;
    }else if(isalnum(s[i])) {
        consonent++;
    }
 }
 cout<<vowel<<endl;
 cout<<consonent;
}
int main() {
    string s="batman";
    count(s);
      return 0;
}