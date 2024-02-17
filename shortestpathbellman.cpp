#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, C, Ts, Te;
    cin >> T >> C >> Ts >>Te;

    int edges[C* 2][3];
    int dist[T+1];

    memset(dist, -1, sizeof(dist));

    dist[Ts] = 0;
    for(int x=0; x<C*2; x+=2){
        int u, v, w;
        cin >> u >> v >> w;
        edges[x][0]=u;
        edges[x][1]=v;
        edges[x][2]=w;
        edges[x+1][0]=v;
        edges[x+1][1]=u;
        edges[x+1][2]=w;

    }

    for(int x=0; x<T-1; x++){
        for(int y=0; y<C*2; y++){
            int u = edges[y][0];
            int v = edges[y][1];
            int w = edges[y][2];
            if(dist[u]!= -1){
                if(dist[v] == -1 || dist[v] > dist[u]+w){
                    dist[v] = dist[u]+w;
                }

            }
        }
    }

    cout<<dist[Te];



}