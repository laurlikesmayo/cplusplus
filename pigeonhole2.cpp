#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, h;
    cin >>n>> h;
    int holes[h]={0};

    for(int i=0; i<n; i++){
        cout<<holes[i];
        int a, b;
        cin >> a >> b;
        int prev = holes[b%h];
        if (a==1){
            holes[b%h]++;
        }
        else{
            holes[b%h]--;

        }
        int maxp=0;
        for(int i=0; i<h; i++){
            maxp = max(maxp, holes[i]);
        }
        cout << maxp;
    }
    
}