#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << n << " ";
    int num = n;
    while(num != 1){
        if(num % 2 == 0){
            num = num/2;
        }
        else{
            num = 3*num+1;
        }
        cout << num << " ";
    }
}