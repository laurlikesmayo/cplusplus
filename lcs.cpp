#include <bits/stdc++.h>

using namespace std;

int nice[1001][1001], a[1001], b[1001];

int main(){
    string az, bz;

    cin >> az >> bz;

    int n=az.length();
    int m = bz.length();

    for(int i=0; i<n; i++){
        a[i] == az[i];

    }
    for(int i=0; i<m; i++){
        b[i] == bz[i];

    }

    for(int i=0; i<=n; ++i){
        for(int j=0; j<=m; ++j){
            if(i == 0 || j == 0){
                nice[i][j]==0;
            }
            else if(a[i-1] == b[j-1]){
                nice[i][j]=nice[i-1][j-1]+1;
            }
            else{
                nice[i][j]=max(nice[i][j-1], nice[i-1][j]);
            }
        }
    }

    cout << nice[n][m]

}