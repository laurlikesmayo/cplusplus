#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b;
    cin >> n >> b;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(b < n-1){
        cout << -1;
    }
    sort(arr, arr+n, greater<int>());

    int sat = 0;
    for(int i=1; i<b+1; i++){
        sat += arr[0] + arr[i];

    }
    cout << sat;

}