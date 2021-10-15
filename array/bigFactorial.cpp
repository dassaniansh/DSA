#include<bits/stdc++.h>
using namespace std;

string bigFactorial(int num){
    vector<int> fact = {1};
    while(num>0){
        int carry = 0, prod;
        for(int i = 0; i<fact.size(); i++){
            prod = fact[i] * num + carry;
            carry = prod / 10, fact[i] = prod % 10;
        }
        while(carry){
            fact.push_back(carry%10);
            carry /= 10;
        }
        num--;
    }
    string s = "";
    for(auto num: fact) s = to_string(num) + s;
    return s;
}

int main(){
    cout<<bigFactorial(20);
    return 0;
}