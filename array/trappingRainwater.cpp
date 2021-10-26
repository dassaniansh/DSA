#include<bits/stdc++.h>
using namespace std;

int rainVolume(vector<int> arr){
    int size = arr.size() - 1;
    int maxPos = 0, water = 0, temp = 0;
    for(int i = 1; i <= size; i++){
        if (arr[i] >= arr[maxPos]) maxPos = i, temp = 0;
        else water += arr[maxPos] - arr[i], temp += arr[maxPos] - arr[i];
    }
    water -= temp;
    temp = arr[size];
    for(int i = size; i >= maxPos; i--) {
        if(arr[i] >= temp) temp = arr[i];
        else water += temp - arr[i];
    }
    
    return water;
}

int main(){
    vector<int> heights = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    cout<<rainVolume(heights);
    return 0;
}