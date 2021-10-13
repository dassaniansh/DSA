/**
    Time: O(n)
    Space: O(1)
    We start with the first and the last element
    of the array and then move towards the center whle swapping them.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> arr){
    int temp;
    for(int i = 0; i < arr.size()/2; i++){
        temp = arr[i];
        arr[i] = arr[arr.size()-i-1];
        arr[arr.size()-i-1] = temp;
    }
    return arr;
}

int main(){
    vector<int> arr = {1, 4, 9, 10, 15};
    arr = reverseArray(arr);
    for(auto it: arr) cout<<it<<' ';
    return 0;
}