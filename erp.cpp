#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[50001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

void dijkstra(int start, int dist[]) {
    while (!pq.empty()) pq.pop(); // Clear the priority queue
    pq.push(make_pair(0, start));
    dist[start] = 0;

    while (!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();
        int node = p.second;
        int node_dist = p.first;
        if (node_dist == dist[node]) {
            for (pair<int, int> neighbor : adj_list[node]) {
                int neighbor_n = neighbor.first;
                int cost = neighbor.second;
                if (dist[neighbor_n] == -1 || dist[neighbor_n] > node_dist + cost) {
                    dist[neighbor_n] = node_dist + cost;
                    pq.push({dist[neighbor_n], neighbor_n});
                } 
            }
        }
    }
}


int main(){
    int N, E, K;
    cin >> N >> E;
    
    int dist1[N];
    int dist2[N];

    for(int i=0; i<E; i++){
        int A, B, W;
        cin >> A >> B >> W;
        adj_list[A].push_back({B, W});
        adj_list[B].push_back({A, W});
        
    }

    
    memset(dist1, -1, sizeof(dist1));
    memset(dist2, -1, sizeof(dist2));

    dijkstra(0, dist1);
    dijkstra(N-1, dist2);
    cin >> K;
    for(int i=0; i<K; i++){
        int x, y;
        cin >> x >> y;
        int D = dist1[N-1];
        int erp=-1;
        if(dist1[x] > 0 && dist2[y] > 0 || dist2[x] > 0 && dist1[y] > 0){
            int erp1 = D-dist1[x] - dist2[y] - 1;
            int erp2 =D-dist2[x] - dist1[y] - 1;
            erp = max(erp1, erp2);

        }

        if(erp<0){
            cout << -1 << endl;
        }
        else{
            cout << erp << endl;
        }
    }





}