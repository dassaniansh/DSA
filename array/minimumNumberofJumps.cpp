#include<bits/stdc++.h>
using namespace std;

int minJumps(vector<int> arr){
    int jumps = 1, maxDist = 0, steps = arr[0];
    for(int i = 1; i < arr.size(); i++){
        if(i == arr.size()-1) return jumps;
        maxDist = max(maxDist, i + arr[i]);
        steps--;
        if(steps == 0){
            jumps++;
            steps = maxDist - i;
            if(i>=maxDist) return -1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout<<minJumps(arr);
    return 0;
}