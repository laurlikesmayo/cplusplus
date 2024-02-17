#include <bits/stdc++.h>

using namespace std;

int parent[100005];
int heights[100005];
int height(int node){
    if(heights[node] != -1){
        return heights[node];
    }
    else if (node == parent[node]){
        heights[node] = 1;
    }
    else{
        heights[node] = 1+ height(parent[node]);
    }
    return heights[node];
}

int main(){
    memset(heights, -1, sizeof(heights));
    int n;
    cin >> n;

    parent[0] = 0;
    for(int i=1; i<n; i++){
        cin >> parent[i];
    }

    int maxh = 1;
    for(int i=0; i<n; i++){
        maxh = max(maxh, height(i));
    }

    cout <<  maxh;
}