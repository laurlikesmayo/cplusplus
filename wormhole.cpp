#include <bits/stdc++.h>
using namespace std;
int dp[1001];
vector<int> adjlist[1001];
int paths(int x){
    if(dp[x] != -1) return dp[x];
    dp[x] = 0;
    for(int i: adjlist[x]){
        dp[x] = min(dp[x], paths(i)+1);
    }
    return dp[x];

}


int main() {
    int n; cin>>n;

    memset(dp, -1, sizeof(dp));
    for(int i=0; i<n; i++){
        adjlist[i].push_back(i+1);
    }
    int h; cin>>h;
    for(int i=0; i<h; i++){
        int a, b;
        cin>>a>>b;
        adjlist[a].push_back(b);

    }
    cout<<paths(n-1);

    // Your code here
}