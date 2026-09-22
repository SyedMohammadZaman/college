#include<bits/stdc++.h>
 using namespace std;                //recursive approach

 int fibbonacci(int n) {
   if (n == 1 || n == 0) {
      return n;
   }else {
      return fibbonacci(n-1) + fibbonacci(n - 2);
   }
   
 }
 int main() {
   int n = 8;
   cout << fibbonacci(8);
   return 0;
 }