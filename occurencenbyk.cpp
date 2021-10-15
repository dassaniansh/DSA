#include<bits/stdc++.h>
using namespace std;

vector<int> occurenceFilter(vector<int> arr, int k){
    map<int, int> m;
    vector<int> s;
    for(auto num: arr) m[num]++;
    for(auto p: m) if(p.second > k) s.push_back(p.first);
    return s;
}

int main(){
    vector<int> arr =  { 1, 1, 2, 2, 3, 5, 
                  4, 2, 2, 3, 1, 1, 1 };
    int k = 4;
    for(auto num: occurenceFilter(arr, arr.size()/k)) cout<<num<<' ';
    return 0;
}