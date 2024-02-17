#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, e, Q;
    cin >> n >> e >> Q;
    int dist[n+1][n+1];
    memset(dist, -1, sizeof(dist));
    for(int i=0; i<e; i++){
        int x, y, t;
        cin >> x >> y >> t;
        dist[x][y] = t;
        dist[y][x] = t;

    }
    for(int i=0; i<n; i++){
        dist[i][i]=0;
    }
    

    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(dist[i][k]== -1 || dist[k][j] == -1){
                    continue;
                }
                if(dist[i][j] == -1 || dist[i][j] > dist[i][k]+dist[k][j]){
                    dist[i][j] =dist[i][k]+dist[k][j];
                }
            }
        }
    }
    for (int i=0; i<Q; i++){
        int a, b;
        cin >> a >> b;
        cout << dist[a][b] << endl;
    }



}