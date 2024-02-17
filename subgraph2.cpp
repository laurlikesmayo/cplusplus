#include <bits/stdc++.h>
using namespace std;
vector<int> adjlist[1001];
bool vis[1001];
int dfs(int x){
    vis[x] = true;
    for(int i: adjlist[x]){
        if(!vis[i]){
            dfs(i);
        }
    }
}

int main() {
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
            count++;
        }
    }
    cout<<count;
}