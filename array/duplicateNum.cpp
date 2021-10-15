#include<bits/stdc++.h>
using namespace std;

int dupNum(vector<int> arr){
    unordered_map<int, bool> checker;
    for(auto num: arr) {
        if(checker[num]) return num;
        else checker[num] = true;
    }
    return -1;
}

int main(){
    vector<int> arr = {4, 5, 3, 2, 7, 6, 1, 6};
    cout<<dupNum(arr);
    return 0;
}