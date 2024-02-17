#include <bits/stdc++.h>
using namespace std;

int mc[256];
vector <int> adjList[256];

int cost(int x){
    if(mc[x] != -1){
        return mc[x];
    }
    if(x > 0 ){
        mc[x] = cost(x-1)+1;
    }
    else{
        mc[x]=0;
    }
    for (int i: adjList[x]){
        mc[x]= min(1+cost(i), mc[x]);
    }
    return mc[x];
}

int main() {
    int n, w;
    cin >> n >> w;

    memset(mc, -1, sizeof(mc));

    for (int i = 0; i < w; i++) {
        int a, b;
        cin >> a >> b;
        adjList[b].push_back(a);
    }

    int minCost = cost(n - 1);

    cout << minCost << endl;

    return 0;
}