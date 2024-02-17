#include <bits/stdc++.h>
using namespace std;
int grid[1001][1001], dp[1001][1001], h, w;
int maxs = 0;
int gecko(int i, int j){
    if(dp[i][j]!= -1) return dp[i][j];
    if (i == 0) return dp[i][j] = grid[i][j];
    dp[i][j] = max(gecko(i-1, j-1), max(gecko(i-1, j), gecko(i-1, j+1))) + grid[i][j];
    return dp[i][j];
}

int main() {
    cin >> h >> w;
    memset(dp, -1, sizeof(dp));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> grid[i][j];
        }
    }
    for (int j = 0; j < w-1; j++) {
        maxs = max(maxs, gecko(h-1, j)); // Start the recursion from each cell in the bottom row
    }
    cout << maxs;
    return 0;
}
