#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> &arr, int low, int high, int target, int n) {
    low = 0;
    high = n - 1;
    int mid = low + (high - low) / 2;
    if (target == mid) {
        return mid;
    }
    if (low >= high) {
        return;
    } else {
        if (target < mid) {
            return binarysearch(arr, low, mid - 1, target, n);
        } else {
            return binarysearch(arr, mid + 1, high, target, n);
        } 
        
    }

}
int main() {
    vector<int>arr = {1,3,5,7,9,11};
    int n = arr.size();
    cout << binarysearch(arr, 0, n - 1, 9, n);
    return 0;
}