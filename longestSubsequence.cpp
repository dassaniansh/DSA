#include<bits/stdc++.h>
using namespace std;

int longestSub(vector<int> arr){
    unordered_set<int> s;
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    for(auto num: arr){
        s.insert(num);
        minNum = min(minNum, num);
        maxNum = max(maxNum, num);
    }
    int maxLen = 1;
    int tempLen = 1;
    for(int i = minNum + 1; i<=maxNum; i++){
        if(s.find(i) != s.end()){
            tempLen++;
            maxLen = max(maxLen, tempLen);
        }
        else tempLen = 1;
    }
    return maxLen;
}

int main(){
    vector<int> arr = {1,9,3,10,4,20,2};
    cout<<longestSub(arr);
}