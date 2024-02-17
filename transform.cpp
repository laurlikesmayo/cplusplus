#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    char arr[l];
    for(int i=0; i<l; i++){
        cin >> arr[i];
    }
    int cost[26][26];
    memset(cost, -1, sizeof(cost));
    for(int i=0; i<n; i++){
        char m, n, w;
        cin >> m >> n >> w;

        cost[m-97][n-97] = w
    

    }
}