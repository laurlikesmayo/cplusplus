#include <bits/stdc++.h>

using namespace std;

vector<int> adj_list[1000001];
bool visited[1000001];

void bfs(int start_node){
    queue<int> q;
    q.push(start_node);
    visited[start_node] = true;
    while(!q.empty()){
        int next = q.front();
        q.pop();
        for(int neighbor: adj_list[next]){
            if(!visited[neighbor]){
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

}


int main(){
    int N,E;
    cin>>N>>E;
    for(int i=0;i<E;i++){
        int A,B;
        cin>>A>>B;
        adj_list[A].push_back(B);
        adj_list[B].push_back(A);}

    int cds=0;
    for(int x=0;x<N;x++){
        if(!visited[x]){
            bfs(x);
            cds+=1;
            }
        }
    cout<<cds;
    }