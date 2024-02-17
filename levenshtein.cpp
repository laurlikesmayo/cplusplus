#include<bits/stdc++.h>

using namespace std;
int dp[3000][3000];
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.length();
    int n = s2.length();
    for(int i=0; i<m+1; i++){
        for(int j=0; j<n+1; j++){
            //settle the base cases
            if(i==0){
                //i, j on the 2D array will be i
                dp[i][j] = j;
            }
            else if (j == 0){
                //vice versa
                dp[i][j] = i;
            }
            else{
                int insert_cost = dp[i][j-1]+1;
                int remove_cost = dp[i-1][j] + 1;
                int replace_cost = dp[i-1][j-1];
                if (s1[i-1] != s2[j-1]){
                    replace_cost +=1;
                }

                dp[i][j] = min(insert_cost, min(remove_cost, replace_cost));

            }
        }
    }
    cout << dp[m][n];

}