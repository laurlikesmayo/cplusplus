#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c[n];
    for(int i=0; i<n; i++){
        cin >> c[i];
    }
    int x; cin>>x;
    int m[x];
    m[0] = 0; m[1] = 1;
    for (int i=0; i<n; i++){
        
        m[i] = min(m[i], m[i-c[i]] + 1);
        
    }
    cout<<m[x];
}