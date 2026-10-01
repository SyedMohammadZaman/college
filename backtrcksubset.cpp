#include<bits/stdc++.h>
using namespace std;
void solve (int i,int n, vector<int>&ans, int hold[]) {
    if (i == n) {
        for (auto x : ans){
            cout << x <<" ";
        }
        cout << endl;
    return ;
  }

  ans.push_back(hold[i]);
        solve (i + 1,n, ans, hold);
        ans.pop_back();
    solve (i + 1,n, ans, hold);

}
int main() {
    vector<int> ans ;
     int hold[] = {1,2,3};
     int n = sizeof(hold) / sizeof(hold[0]);
    solve (0,n,  ans, hold);
    return 0;
}