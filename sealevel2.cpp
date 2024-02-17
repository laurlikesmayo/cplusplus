#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adjlist[1001];
bool vis[1001];
int sealevel(int x, int y, int h) {
    if (vis[x]) return -1;
    if (x == y) return h;
    vis[x] = true;
    for (pair<int, int> i : adjlist[x]) {
        int result = sealevel(i.first, y, h + i.second);
        if (result != -1) return result;
    }
    return -1;
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n-1; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        adjlist[a].push_back(make_pair(b, w));
        adjlist[b].push_back(make_pair(a, w));
    }
    int k; cin >> k; int arr[k];
    for (int i = 0; i < k; i++) {
        int x, y; cin >> x >> y;
        memset(vis, false, sizeof(vis));
        if(x-y > 0){
            arr[i] = -1 * (sealevel(y, x, 0));
        }
        else{
            arr[i] = sealevel(x, y, 0);
        }
    }
    for(int i=0; i<k; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}



//fbroken but to fix jsut store hiehgt in an array so its easier im too lazy to do this lol