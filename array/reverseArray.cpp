#include<bits/stdc++.h>
using namespace std;

int main(){

    /**
    Time: O(n)
    Space: O(1)
    We start with the first and the last element
    of the array and then move towards the center whle swapping them.
    */

    int arr[] = {1, 4, 9, 10, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp;
    for(int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}