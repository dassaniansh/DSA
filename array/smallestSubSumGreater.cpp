#include<bits/stdc++.h>
using namespace std;

int smallestSumSubarray(vector<int> arr, int x){
    int sum = arr[0], i = 0, j;
    int ans = arr.size() + 1;
    for(j = 1; j<arr.size(); j++){
        while(sum > x && i < arr.size()  - 1)
            sum -= arr[i++], ans = min(ans, j - i + 1);
        if(sum <= x) sum += arr[j];
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    int x = 280;
    cout<<smallestSumSubarray(arr, x);
    return 0;
}