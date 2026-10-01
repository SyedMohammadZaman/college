#include<bits/stdc++.h>
using namespace std;
void solve (int i,int n, vector<int>&ans, int hold[], int sum, int s) {
    int count = 0;
    if (i == n) {
        if (s == sum) {
        for (auto x : ans){
            cout << x <<" ";
            count ++;
        }
        cout << count;
        cout << endl;
    }
    return ;
  }

  ans.push_back(hold[i]);
  s += hold[i];
        solve (i + 1,n, ans, hold, s, sum);
        ans.pop_back();
        s -= hold[i];
    solve (i + 1,n, ans, hold, s, sum);

}
int main() {
    vector<int> ans ;
     int hold[] = {1,2,3};
     int n = sizeof(hold) / sizeof(hold[0]);
    solve (0,n,  ans, hold, 4, 0);
    return 0;
}