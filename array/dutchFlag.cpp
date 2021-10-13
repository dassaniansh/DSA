/**
    Time: O(n)
    Space: O(1)
    Named Algorithm: Dutch National Flag Algorithm
    The point of this algorithm is to consider three 
    known points low, mid and high within the same array.
    Low to mid consists of 0, mid to high consists of 1,
    mid to high is our search area, and anything above high
    is 2.

    initially low and mid are set to start and high is at the end,
    we check each element and push them into their specific regions.
 */

#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<int> dutchFlagAlgorithm(vector<int> arr){
    int low = 0, mid = 0, high = arr.size();
    for(int i = 0; i < high; i++){
        switch(arr[i]){
            case 0: swap(&arr[low++], &arr[i]);
            case 1:
                mid++;
                break;
            case 2: swap(&arr[--high], & arr[i--]);
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {0, 0, 1, 2, 0, 2, 1, 0, 2, 2, 1};
    arr = dutchFlagAlgorithm(arr);
    for(auto it: arr) cout<<it<<' ';
    return 0;
}