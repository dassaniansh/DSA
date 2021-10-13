/*
    Time: O( (N+M)Log(N+M) )
    Space:O(N+M)

    The STL set has an insertion time complexity of LogN
    and sets truncates duplicate entries so using them is
    the fastest way to figure out union of vectors.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> vectorUnion(vector<int> arr1, vector<int> arr2){
    set<int> unionSet;
    for(auto num: arr1) unionSet.insert(num);
    for(auto num: arr2) unionSet.insert(num);
    vector<int> unionList;
    for(auto num: unionSet) unionList.push_back(num);
    return unionList;
}

int main(){
    vector<int> arr1 = {85, 25, 12, 54, 6};
    vector<int> arr2 = {85, 2, 69};
    arr1 = vectorUnion(arr1, arr2);
    for(auto num: arr1) cout<<num<<' ';
    return 0;
}