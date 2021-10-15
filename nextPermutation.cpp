#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<int> nextPerm(vector<int> arr){
    int i = arr.size() - 1;
    while(arr[i] < arr[i - 1] && i-- > 0);
    int p1 = i - 1;
    i = arr.size() - 1;
    while(arr[p1] > arr[i] && i-- > p1);
    swap(&arr[p1], &arr[i]);
    i = p1 + 1;
    int j = arr.size() - 1;
    while(i<j) swap(&arr[i++], &arr[j--]);
    return arr;
}

int main(){
    vector<int> arr = {1, 5, 8, 4, 7, 6, 5, 3, 1};
    arr = nextPerm(arr);
    for(auto num: arr) cout<<num<<' ';
}