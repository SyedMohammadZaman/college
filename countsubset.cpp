#include<bits/stdc++.h>
using namespace std;
int solve (int i,int n, vector<int>&ans, int hold[]) {
    if (i == n) {
    return 1;
  }

      int pick = solve (i + 1,n, ans, hold);
   int notpick = solve (i + 1,n, ans, hold);
  return pick  + notpick;
}
int main() {
    vector<int> ans ;
     int hold[] = {1,2,3};
     int n = sizeof(hold) / sizeof(hold[0]);
    solve (0,n,  ans, hold);
    return 0;
}