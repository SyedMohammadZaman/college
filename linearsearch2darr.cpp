#include<iostream>
using namespace std;
    bool linearsearch(int matrix[][3],int target,int rows,int cols){
for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
             if(target==matrix[i][j]){
               
                return true;
             }
        }
    }
     return false;
     }
    
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    cout<< linearsearch(matrix,7,rows,cols)<<" ";        
    
    return 0;
}