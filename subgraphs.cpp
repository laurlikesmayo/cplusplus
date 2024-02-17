#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1000001];
bool visited[1000001];
void dfs(int node){
    visited[node] =true;
    for(int neighbor: adj_list[node]){
        if(!visited[neighbor]){
            dfs(neighbor);}}}
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
            dfs(x);
            cds+=1;}}
    cout<<cds;}