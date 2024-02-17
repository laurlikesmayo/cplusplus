#include <bits/stdc++.h>
using namespace std;
int N;
vector<pair<int, int>> listz[100001];
bool visited[100001];
int heights[100001];
int main(){
    
    cin >> N;
    
    for(int i=0; i<N-1; i++){
        int A, B, H;
        cin >> A >> B >> H;
        listz[A].push_back({B, H});
        listz[B].push_back({A, H});
    }



}

void dfs(int x, int current_height){
    for(pair<int, int> p: listz[x]){
        int i = p.first;
        if(visited[i]){
            continue;
        }
        int height_diff = p.second;
        visited[i] = true;
        heights[i] = current_height + height_diff;
        dfs(i, height_diff);
    }
}