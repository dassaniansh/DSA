#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int> arr1, vector<int> arr2){
    unordered_set<int> s;
    for(auto num: arr1) s.insert(num);
    for(auto num: arr2) s.insert(num);
    return ((arr1.size() > arr2.size())?arr1.size():arr2.size()) == s.size();
}

int main(){
    vector<int> arr1 = {10, 5, 2, 23, 19};
    vector<int> arr2 = {19, 5, 3};
    cout<<(isSubset(arr1, arr2)? "YES" : "NO");
    return 0;
}