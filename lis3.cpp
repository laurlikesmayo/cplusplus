#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> b;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        auto it = lower_bound(b.begin(), b.end(), x);
        if (it==b.end()) b.push_back(x);
        else *it = x;
    }
    cout<<b.size();
}