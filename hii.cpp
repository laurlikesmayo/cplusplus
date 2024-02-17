#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long N;
    cin >> N;
    int temp;
    int hello=0;
    
    while(N>0){
        temp=N%2;
        N=N/2;
        if (temp == 1){
            hello +=1;
        }
    }
    cout << hello;
}