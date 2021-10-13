#include<bits/stdc++.h>
using namespace std;

/**
    Time: O(n)
    Space: O(1)
    We start with the first element and on each element
    we check if its lower than the current minimum, if it is
    then we set the current minimum to this number, if not then we check
    if this number is larger than the largest number, if it is we set the current
    largest to this number.
*/

pair<int,int> minMax(vector<int> arr){
    int min = arr[0];
    int max = arr[0];
    for(auto num: arr){
        if(num<min){
            min = num;
        }
        else if(num>max){
            max = num;
        };
    }
    return {min, max};
}

int main(){
    vector<int> arr = {1, 4, 9, 10, 15};
    pair<int, int> minmax = minMax(arr);
    cout<<"Minimum: "<<minmax.first<<"\n"<<"Maximum: "<<minmax.second;
    return 0;
}
