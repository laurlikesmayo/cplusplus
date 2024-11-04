#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>> n;
    int arr[n*4];
    arr[0]= 1; arr[1] = 1;
    for (int i=2; i<n*4; i++){
        if(i % n == 1){
            arr[i] = arr[i-1];
        }
        else{
            arr[i] = arr[i-1]+1;
        }
    }
    
}