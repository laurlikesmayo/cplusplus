#include <bits/stdc++.h>
using namespace std;
vector<int> adjlist[1001];
int vis[1001];
int dfs(int x){
    if(vis[x] == 1) return 1;//there is a cycle
    if(vis[x] == 2) return 2; //visited
    vis[x] =1;
    for(int i: adjlist[x]){
        if(dfs(i)) return 1; //if dfs(i) == 1 means there is a cycle
    }
    vis[x] = 2; //mark node as completely visited so u know there wont be a cycle anymore
}



int main() {
    int n;
    cin>>n;
    map<string, int> mp;
    int counter=0;
    for(int i=0; i<n; i++){
        string a, b;
        cin >> a >> b;
        if (mp.find(a) == mp.end()){
            mp[a] = counter;
            counter +=1;
        }
        if (mp.find(b) == mp.end()){
            mp[b] = counter;
            counter +=1;
        }
        adjlist[mp[a]].push_back(mp[b]);
    }
    string s;
    while(cin>>s){
        if(dfs(mp[s]) == 1){
            cout<<s<<" safe";
        }
        else{
            cout<<s<<" trapped";
        }
    }

    // Your code here
}