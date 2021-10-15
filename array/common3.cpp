#include<bits/stdc++.h>
using namespace std;

vector<int> common3(vector<int> A, vector<int> B, vector<int> C){
    vector<int> common;
    unordered_map<int, bool> mA, mB, mC;
    for(auto num: A) mA[num] = true;
    for(auto num: B) mB[num] = true;
    for(auto num: C){
        if(mA[num] && mB[num] && !mC[num]) common.push_back(num);
        mC[num] = true;
    }
    return common;
}

int main(){
    vector<int> A = {1, 5, 10, 20, 40, 80};
    vector<int> B = {6, 7, 20, 80, 100};
    vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};
    for(auto num: common3(A, B, C)) cout<<num<<' ';
    return 0;
}