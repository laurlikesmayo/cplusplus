#include <bits/stdc++.h>
using namespace std;
int vis[1000001];
    vector <int> adjList[1000001];
    vector<int> topo;
    bool has_cycle(int x){
        if (vis[x] == 2){
            return false;
        }
        if (vis[x] == 1){
            return true;
        }
        vis[x] = 1;
        for(int i: adjList[x]){
            if (has_cycle(i)){
                return true;
            }
        }
        topo.push_back(x);
        vis[x] = 2;
        return false;
    }
int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);

    }

    for(int i=0; i<n; i++){
        if(!vis[i]){
            if(has_cycle(i)){
                cout << "IMPOSSIBLE";
                return 0;
            }
        }

    }
    reverse(topo.begin(), topo.end());

    for(int i=0; i<n; i++){
        cout << topo[i] << " ";
    }

}
