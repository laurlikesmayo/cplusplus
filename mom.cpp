#include <bits/stdc++.h>

using namespace std;
int vis[1001];
vector<int> adj_list[1001];

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
    vis[x] = 2;
    return false;
}

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    int counter = 0;
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
        adj_list[mp[a]].push_back(mp[b]);

    }
    string s;
    while(cin>>s){
        if(has_cycle(mp[s]) == true){
            cout << s << " " << "safe" << endl;
        }
        else{
            cout << s << " " << "trapped" << endl;
        }

    }
}
