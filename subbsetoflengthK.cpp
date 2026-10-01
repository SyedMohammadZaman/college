#include<bits/stdc++.h>
using namespace std;
void solve (int i,int n, vector<int>&ans, int hold[], int length) {
    if (i == n) {
        if (ans.size() == length)
        for (auto x : ans){
            cout << x <<" ";
        }
        cout << endl;
    return ;
  }

  ans.push_back(hold[i]);
        solve (i + 1,n, ans, hold, length);
        ans.pop_back();
    solve (i + 1,n, ans, hold, length);

}
int main() {
    vector<int> ans ;
     int hold[] = {1,2,3};
     int n = sizeof(hold) / sizeof(hold[0]);
    solve (0,n,  ans, hold, 2);
    return 0;
}