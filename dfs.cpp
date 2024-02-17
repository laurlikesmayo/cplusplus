#include <bits/stdc++.h>
using namespace std;
vector<int> adjlist[1001];
bool vis[1001];
void dfs(int x){
    if(vis[x]) return;
    vis[x] = true;
    for(int i: adjlist[x]){
        dfs(i);
    }
}

int main() {
    // Your code here
}