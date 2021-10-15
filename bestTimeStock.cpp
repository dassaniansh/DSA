#include<bits/stdc++.h>
using namespace std;

int bestTime(vector<int> arr){
    int maxInterval = INT_MIN;
    int minNum = INT_MAX;
    for(auto num: arr){
        minNum = min(minNum, num);
        maxInterval = max(maxInterval, num - minNum);
    }
    return maxInterval;

}

int main(){
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout<<bestTime(arr);
    return 0;
}