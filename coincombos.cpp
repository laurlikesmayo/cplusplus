#include <bits/stdc++.h>
using namespace std;
int N, V, coins[1001], dp[1001][1001];
int ways(int i, int v){
    if(v==0) return 1;
    if(i==0) return 0;
    if(dp[i][v]!= -1) return dp[i][v];
    if(v<coins[i]) dp[i][v] = ways(i-1, v);
    else dp[i][v] = ways(i-1, v) + ways(i, v-coins[i]);
    return dp[i][v];
}
int main(){
    cin>>N, V;
    for(int i=0; i<N; i++){
        cin>>coins[i];
        for(int j=0; j<V; j++){
            dp[i][j] = -1;
        }
    }
    cout<<ways(N, V) << endl;
}