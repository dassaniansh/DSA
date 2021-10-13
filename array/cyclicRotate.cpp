/*
    Time: O(n)
    Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> cyclicRotate(vector<int> arr){
    int end = arr[arr.size() - 1];
    for(int i = arr.size() - 1; i>=1; i--)
        arr[i] = arr[i - 1];
    arr[0] = end;
    return arr;
}

int main(){
    vector<int> arr = {-5, 5, 3, -8, 1, 8, 2, -2, -6};
    arr = cyclicRotate(arr);
    for(auto num: arr) cout<<num<<' ';
    return 0;
}