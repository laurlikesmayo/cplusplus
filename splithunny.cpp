#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adjlist[1001][1001];

bool vis[1001][1001];
int dfs(int i, int j){
    vis[i][j] = true;
    for(pair<int, int> x: adjlist[i][j]){
        if (!vis[x.first][x.second]){
            dfs(x.first, x.second);
        }
    }
}
int main() {
    int h, w;
    cin >> h, w;
    char grid[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>grid[i][j];
        }
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(grid[i][j] != '.'){
                if(grid[i-1][j] != '.') adjlist[i][j].push_back(make_pair(i-1, j));
                if(grid[i+1][j] != '.') adjlist[i][j].push_back(make_pair(i+1, j));
                if(grid[i][j-1] != '.') adjlist[i][j].push_back(make_pair(i, j-1));
                if(grid[i][j+1] != '.') adjlist[i][j].push_back(make_pair(i, j+1));
            }
        }
    }
    int count = 0;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(!vis[i][j]){
                dfs(i, j);
                count++;
            }
        }
    }
    cout<<count;
    // Your code here
}