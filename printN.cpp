#include<iostream>
using namespace std;
void print(int i,int n) {
    if (i > n){
         return ;
    }else{
        cout << i << endl;
      print (i+1,n);
      
}
}
int main(){
    int n = 10;
    print(1,10);
    return 0;
}