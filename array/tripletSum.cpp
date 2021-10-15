#include<bits/stdc++.h>
using namespace std;

vector<int> find3Numbers(vector<int> arr, int x){
    unordered_set<int> s;
    for(auto num1: arr){
        for(auto num2: arr){
            if(s.find(x - num1 - num2) != s.end())
                return {num1, num2, x - num1 - num2};
            s.insert(x - num1 - num2);
        }
    }
    return {};
}

int main(){
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int X = 13;
    for(auto num: find3Numbers(arr, X)) cout<<num<<' ';
    return 0;
}