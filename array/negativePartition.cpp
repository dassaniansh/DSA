/**
    Time: O(n)
    Space: O(1)
    similar to Dutch Flag Algorithm just simpler, we iterate through
    each number and push it to the end if it is positve.
 */

#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<int> negativeSort(vector<int> arr){
    int start = 0, mid = arr.size();
    while(start<mid){
        if(arr[start] > 0) swap(&arr[start--], &arr[--mid]);
        start++;
    }
    return arr;
}

int main(){
    vector<int> arr = {-5, 5, 3, -8, 1, 8, 2, -2, -6};
    arr = negativeSort(arr);
    for(auto num: arr) cout<<num<<' ';
    return 0;
}