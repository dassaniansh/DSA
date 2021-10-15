/*
    Time: O(N)
    Space: O(1)
    Named Algorthm: Kadane's Algorithm

    Kadane's Algorithm is an algorithm to find the contigous
    subarray with the largest sum. Two counters are taken, maxTemp
    and maxFinal where maxTemp keeps track of the contigous subarray
    currently being monitored and resets to zero if the sum of the subarray
    is negative, this is because if the subarray sums up to zero then we
    stop considering it as place to check. the maxFinal term compares maxTemp
    values throughout the iterations.
*/

#include<bits/stdc++.h>
using namespace std;

int kadane(vector<int> arr){
    int maxTemp = 0, maxFinal = INT_MIN;
    for(auto num: arr){
        maxTemp += num;
        maxFinal = max(maxFinal, maxTemp);
        maxTemp = max(maxTemp, 0);
    }
    return maxFinal;
}

int main(){
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout<<kadane(arr);
    return 0;
}