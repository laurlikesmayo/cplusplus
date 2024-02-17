#include <bits/stdc++.h>
using namespace std;
int arr[1001], dp[1001];
int lis(int x){
    if(dp[x]!= -1) return dp[x];
    dp[x] = 1;
    for(int j=0; j<x; j++){
        if(arr[j] < arr[x]){
            dp[x] = max(dp[x], lis(j)+1);
        }
    }
    return dp[x];
}
int main(){
    int n;
    cin >> n;
    int maxs=0;
    memset(dp, -1, sizeof(dp)); 
    for(int i=0; i<n; i++){
        cin>>arr[i];
        maxs = max(maxs, lis(i));
    }
    cout << maxs;

}