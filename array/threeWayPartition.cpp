#include<bits/stdc++.h>
using namespace std;

void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<int> threeWayPartition(vector<int> arr, int a, int b){
    int low = 0, mid = 0, high = arr.size() - 1;
    while(mid < high){
        if(arr[mid] < a) swap(arr[low++], arr[mid++]);
        else if(arr[mid] <= b) mid++;
        else swap(arr[mid], arr[high--]);
    }
    return arr;
}

int main(){
    vector<int> arr = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int a = 14, b = 20;
    for(auto num: threeWayPartition(arr, a, b)) cout<<num<<' ';
    return 0;
}