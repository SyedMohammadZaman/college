#include<iostream>
using namespace std;
int reverse(int ans,int n) {
    int rem = 0;
    if (n  < 10){
         return ans*10 + n;
    }else{
    rem = n % 10;
   return reverse(ans*10 + rem,n / 10);
        
}
}
int main(){
    int n = 54321;
 cout <<  reverse(0,n);
    return 0;
}