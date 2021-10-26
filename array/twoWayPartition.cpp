#include<bits/stdc++.h>
using namespace std;

void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int twoWayPartition(vector<int> arr, int k){
    int low = 0, high = arr.size() - 1, count = 0;
    while(low < high){
        if(arr[low] < k) low++;
        else swap(arr[low++], arr[high--]), count++;
    }
    return count;
}

int main(){
    vector<int> arr = {2, 7, 9, 5, 8, 7, 4} ;
    int k = 6;
    cout<<twoWayPartition(arr, k);
    return 0;
}