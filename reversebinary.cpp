#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int temp;
    vector<int> hello;
    while(N>0){
        temp=N%2;
        N=N/2;
        hello.push_back(temp);

    }
    int num=0;
    int hi=size(hello);
    for (int i=0; i<hi; i++){
        num= num*2 + hello[i];

    }
    cout << num;
    }