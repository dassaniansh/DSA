#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(vector<int> arr, int l, int r){
    int x = arr[r], i = l;
    for(int j = l; j <= r - 1; j++){
        if(arr[j] <= x){
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

int randomPartition(vector<int> arr, int l, int r){
    int n = r - l + 1;
    int pivot = rand()%n + l;
    swap(&arr[pivot], &arr[r]);
    return partition(arr, l, r);
}

int KthSmallest(vector<int> arr, int k, int l, int r){
    if(k > 0 && k <= r - l + 1){
        int currPos = randomPartition(arr, l, r);
        if(currPos - l == k - 1)
            return arr[currPos];
        else if(currPos - l > k - 1)
            return KthSmallest(arr, k, l, currPos - 1);
        else return KthSmallest(arr, k - currPos + l - 1,
                                 currPos + 1, r);
    }
    return -1;
}

int main(){
    vector<int> arr = {12, 3, 5, 7, 4, 19, 26};
    int k = 3;
    cout<<KthSmallest(arr, k, 0, arr.size() - 1);
    return 0;
}