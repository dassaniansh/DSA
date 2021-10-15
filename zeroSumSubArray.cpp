#include<bits/stdc++.h>
using namespace std;

bool zeroSum(vector<int> arr){
    unordered_map<int,bool> sums;
    int sum = 0;
    for(auto num: arr){
        sum += num;
        if(sums[sum]) return true;
        sums[sum] = true;
    }
    return false;
}

int main(){
    vector<int> arr = {4, 2, -3, 1, 6};
    cout<<(zeroSum(arr)?"YES":"NO");
    return 0;
}