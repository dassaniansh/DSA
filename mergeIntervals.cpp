#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> mergeInterval(vector<pair<int, int>> intervals){
    vector<pair<int, int>> merged;
    sort(intervals.begin(), intervals.end());
    for(auto iv: intervals){
        if(merged.empty() || merged.back().second < iv.first) merged.push_back(iv);
        else merged.back().second = iv.second;
    }
    return merged;
}

int main(){
    vector<pair<int, int>> intervals = {
        {1,9}, {2,5}, {19,20}, {10,11}, 
        {12,20}, {0,3}, {0,1}, {0,2}};
    intervals = mergeInterval(intervals);
    for(auto iv: intervals) cout<<'('<<iv.first<<','<<iv.second<<") ";
    return 0;
}