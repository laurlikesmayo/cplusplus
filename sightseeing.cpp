// #include <bits/stdc++.h>
// using namespace std;
// int parent[10000];
// int height[10000];
// vector<pair<int, int>> cities[10000];
// int root(int x){
//     if (parent[x] == x) return x;
//     parent[x] = root(parent[x]);
//     return parent[x];
// }
// bool isConnected(int a, int b){
//     if(root(a) == root(b)){
//         return true;
//     }
//     return false;
// }
// void connect(int a, int b){
//     int rootA = root(a);
//     int rootB= root(b);
//     if(height[rootA]>height[rootB]){
//         parent[rootB]=rootA;
//     }
//     else if (height[rootB] < height[rootA]){
//         parent[rootA] = rootB;
//     }
//     else{
//         parent[rootB] = rootA;
//         height[rootA]++;
//     }

// }
// bool vis[100000];
// int mini[10000];
// void dfs(int x){
//     for(pair i:cities[x]){
//         if(vis[i.first]) continue;
//         vis[i.first] = true;
//         mini[i.first] = min(i.second, mini[x]);
//         dfs(i.first);
//     }
// }




// int main(){
//     vector<pair<int, pair<int, int>>> city; 
//     int v, e, q;
    
//     cin >> v >> e >>q;
//     for(int i=0; i<e; i++){
//         int a, b, c;
//         cin >> a >> b >>c;
//         city.push_back(make_pair(a, make_pair(b, c)));
//     }
    
//     sort(city.begin(), city.end(), [](const auto& a, const auto& b) {
//         return a.first > b.first;
//     });
//     int total = 0;
//     for(auto e:city){
//         int a = e.second.first;
//         int b = e.second.second;
//         int weight = e.first;
//         if(root(a) == root(b)) continue;
//         total += weight;
//         cities[a].push_back(make_pair(b, weight));
//         cities[b].push_back(make_pair(a, weight));
//         parent[root(a)] = root(b);
//         }
//     dfs(1);
//     for(int i=0; i<q; i++){
//         int a; cin >> a;
//         cout << mini[i] << endl;
//     }
//     }

#include <bits/stdc++.h>
using namespace std;

int parent[500001];
int height[500001];
vector<pair<int, pair<int, int>>> city;
vector<pair<int, int>> cities[500001];
bool vis[500001];
int mini[500001];

int root(int x) {
    if (parent[x] == x) return x;
    parent[x] = root(parent[x]);
    return parent[x];
}

void unionSets(int a, int b) {
    int rootA = root(a);
    int rootB = root(b);
    if (height[rootA] > height[rootB]) {
        parent[rootB] = rootA;
    } else if (height[rootB] < height[rootA]) {
        parent[rootA] = rootB;
    } else {
        parent[rootB] = rootA;
        height[rootA]++;
    }
}

void kruskalsAlgorithm(int v) {
    for (int i = 1; i <= v; ++i) {
        parent[i] = i;
        height[i] = 0;
        vis[i] = false;
        mini[i] = INT_MAX;
    }

    sort(city.begin(), city.end(), [](const auto& a, const auto& b) {
        return a.first > b.first;
    });
    
    for (auto e : city) {
        int a = e.second.first;
        int b = e.second.second;
        int weight = e.first;

        if (root(a) == root(b)) continue;

        cities[a].push_back({b, weight});
        cities[b].push_back({a, weight});

        unionSets(a, b);
    }
}

void dfs(int x) {
    for (pair<int, int> i : cities[x]) {
        if (!vis[i.first]) {
            vis[i.first] = true;
            mini[i.first] = min(i.second, mini[x]);
            dfs(i.first);
        }
    }
}

int main() {
    int v, e, q;
    cin >> v >> e >> q;

    for (int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        city.push_back({c, {a, b}});
    }

    kruskalsAlgorithm(v);

    for (int i = 0; i < q; i++) {
        int destination;
        cin >> destination;

        vis[1] = true;
        dfs(1);

        cout << mini[destination] << endl;
    }

    return 0;
}



