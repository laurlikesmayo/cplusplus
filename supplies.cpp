#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, E, T, H;
    cin >> N >> E >> H >> T;
    vector<pair<int, int>> adj_list[N];
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;    int dist[N+1];
    memset(dist, -1, sizeof(dist));
    
    for (int i=0; i<E; i++){
        int A, B, C;
        cin >> A >> B >> C;
        adj_list[A].push_back({B, C});
        pq.push(make_pair(0, H));
        dist[0] = 0;

        while (!pq.empty()){
            pair<int, int> p = pq.top();
            pq.pop();
            int node = p.second;
            int node_dist = p.first;

            if(node_dist < dist[node]){
                for(pair<int, int> neighbor: adj_list[node]){
                    int neighbor_n = neighbor.first;
                    int cost = neighbor.second;
                    if(dist[neighbor_n]!= -1){
                        dist[neighbor_n] = min(dist[neighbor_n], node_dist + cost);
                        continue;
                    }
                    
                    dist[neighbor_n] = node_dist + cost;
                    pq.push({dist[neighbor_n], neighbor_n});
                    
                    
                }

            }
        }



    }

    cout << dist[T];

}