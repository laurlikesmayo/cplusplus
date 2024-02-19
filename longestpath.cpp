#include <bits/stdc++.h>
using namespace std;
int dp[1001];
vector<int> adjlist[1001];
int paths(int x){
    if(dp[x] != -1) return dp[x];
    dp[x] = 0;
    for(int i: adjlist[x]){
        dp[x] = max(paths(i)+1, dp[x]);
    }
    return dp[x];
}


int main() {
    // Your code here
}