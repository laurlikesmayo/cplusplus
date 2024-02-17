#include <bits/stdc++.h>
using namespace std;
int n, v, coins[101], dp[101];
int mincoins(int val){
    if (val==0) return 0;
    if (dp[val]!= -1) return dp[val];
    dp[val] = 1000000;
    for(int i=0; i<n; i++){
        if(val>=coins[i]) dp[val] = min(dp[val], mincoins(val-coins[i])+1);
    }
    return dp[val];

}

int main(){
    memset(dp, -1, sizeof(dp));
    cin >> n >>v;
    for(int i=0; i<n; i++){
        cin>>coins[i];
    }
    cout << mincoins(v);
    
    
}