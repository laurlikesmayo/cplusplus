#include <bits/stdc++.h>
using namespace std;

int K, peb[1000], dp[1000];

int f(int x) {
    if (x == 0) return peb[0]; // Base case
    if (dp[x] != -1) return dp[x];
    
    int result = INT_MIN;
    for (int j = x - 1; j >= max(0, x - K); --j) {
        result = max(result, min(f(j), peb[x]));
    }
    dp[x] = result;
    return result;
}

int main() {
    int n;
    cin >> n >> K;

    for (int i = 0; i < n; ++i) {
        cin >> peb[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << f(n - 1); // Adjusted to use 0-based indexing

    return 0;
}






























//int indx=0;
    // int maxs=0, mins;
    // while(indx+k <= n){
    //     int sta;
    //     for(int i=indx; i<indx+k; i++){
    //         if(peb[i] < mins){
    //             mins = peb[i];
    //             sta = i;
    //         }
    //     }
    //     maxs = max(maxs, peb[sta]);
    //     indx = sta+1;


    // }
    // cout<<maxs;