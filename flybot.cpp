#include <bits/stdc++.h>

using namespace std;
int main(){
    int h, w;
    cin >> h >> w;
    int dp[h][w];
    char grid[h][w];
    for(int i=0; i<h; i++ ){
        for(int j=0; j<w; j++){
            cin >> grid[i][j];
            dp[i][j] = 0;
        }
    }

    for(int i=0; i<h; i++ ){
        for(int j=0; j<w; j++){
            
            if (i==0 && j==0){
                dp[i][j] = 1;
            }
            else if (i==0){
                dp[i][j] = 1;

            }
            else if (j==0){
                dp[i][j]= 1;

            }
            else{
                if(grid[i][j] == 'X'){
                    dp[i][j] = 0;
                }
                else{
                    dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 1000000007;
                }
                



            }
        cout << dp[i][j] << " ";

        }

    }
    cout << dp[h-1][w-1];



}