#include<bits/stdc++.h>
using namespace std;

int sumPair(vector<int> arr, int sum){
    int count = 0;
    unordered_map<int, int> m;
    for(auto num: arr) count += m[sum - num], m[num]++;
    return count;
}

int main(){
    vector<int> arr = {1, 5, 7, 1};
    cout<<sumPair(arr, 6);
    return 0;
}