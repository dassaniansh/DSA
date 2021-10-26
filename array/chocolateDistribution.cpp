#include<bits/stdc++.h>
using namespace std;

int minDiff(vector<int> arr, int m){
    sort(arr.begin(), arr.end());
    int diff = INT_MAX;
    for(int i = 0; i < arr.size() - m + 1; i++) diff = min(diff, arr[i + m - 1] - arr[i]);
    return diff;
}

int main(){
    vector<int> arr = { 12, 4,  7,  9,  2,  23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 7;
    cout<<minDiff(arr, m);
}