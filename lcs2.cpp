#include <bits/stdc++.h>
using namespace std;
string a, b; 
int dp[1001][1001];
int lcs(int i, int j){
    if(i ==0 || j ==0) dp[i][j] = 0;
    else if(a[i-1] == b[j-1]) dp[i][j] = lcs(i-1, j-1) + 1;
    else dp[i][j] = max(lcs(i-1, j), lcs(i, j-1));
    return dp[i][j];
}


int main(){
    cin >> a >> b;
    cout << lcs(a.length(), b.length()) << endl;
}

