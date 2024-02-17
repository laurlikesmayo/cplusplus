#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    int grid[h][w];
    int dp[h][w];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> grid[i][j];
            dp[h][w] = 0;
        }
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if (i==0){
                dp[i][j] = grid[i][j];

            }
            else {
                if(j==0){
                    dp[i][j] = grid[i][j] + max(dp[i-1][j], dp[i-1][j+1]);
                    }
                else if (j==w-1){
                    dp[i][j] = grid[i][j] + max(dp[i-1][j-1], dp[i-1][j]);
                }
                else{

                    dp[i][j] = grid[i][j] + max(dp[i-1][j-1], max(dp[i-1][j], dp[i-1][j+1]));
                }
                
            }
        }
    }
    int maxx = dp[h-1][0];
    for(int i=0; i<w-1; i++){
        maxx = max(maxx, dp[h-1][i]); 
    }
    cout << maxx;
}