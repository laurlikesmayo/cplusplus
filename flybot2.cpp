#include <bits/stdc++.h>
using namespace std;
char grid[1001][1001];
int dp[1001][1001];
int flybot(int i, int j){
    if(i<0 || j<0) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    else if (i==0 && j==0) dp[i][j] = 1;
    else{
        if (grid[i][j] == 'X') dp[i][j] = 0;
        else dp[i][j] = (flybot(i-1, j) + flybot(i, j-1)) % 1000000007;
    }
    return dp[i][j];
}
int main() {
    int h, w; cin>> h >> w;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> grid[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    cout<<flybot(h-1, w-1);

    // Your code here
}