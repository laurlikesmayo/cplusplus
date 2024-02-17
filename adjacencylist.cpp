#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> graph[10000];
    int v, e, a, b;
    cin >> v >> e;
    for(int i=0; i<e; i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(auto it: graph[a]){
        cout<< it;
    }
}