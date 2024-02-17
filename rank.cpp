#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1001];
int vis[1001];
vector<int> topo;
bool has_cycle(int x){
    if (vis[x] == 2){
        return false;
    }
    if (vis[x] == 1){
        return true;
    }
    vis[x] = 1;
    for(int i: adj_list[x]){
        if (has_cycle(i)){
            return true;
        }
    }
    topo.push_back(x);
    vis[x] = 2;
    return false;
}
    

int main(){
    int k, n;
    cin >> k >> n;
    for(int i=0; i<n; i++){
        int a, b, c;
        char ch1, ch2;
        cin >> a >> ch1 >> b >> ch2 >> c;
        if(ch1=='>'){
            adj_list[a].push_back(b);
            adj_list[a].push_back(c);

        }
        else{
            adj_list[a].push_back(c);
            adj_list[b].push_back(c);
        }



    }

    for(int i=0; i<k; i++){
        if(!vis[i]){
            if(has_cycle(i)){
                cout << 0;
                return 0;
            }
        }

    }
    reverse(topo.begin(), topo.end());

    for(int i=0; i<k; i++){
        cout << topo[i] << " ";
    }
    

}