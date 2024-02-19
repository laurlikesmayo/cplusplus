#include <bits/stdc++.h>
using namespace std;
vector<int> adjlist[1001];
int dp[1001];
int paths(int x){
    if(dp[x]!= -1) return dp[x];
    dp[x] = 0;
    for(int i: adjlist[x]){
        dp[x] += paths(i);
    }
    return dp[x];

}

int main() {
    // Your code here
}