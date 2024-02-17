#include <bits/stdc++.h>
using namespace std;\


int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    int sums[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i>0) sums[i] = sums[i-1] + arr[i];
        else sums[0] = arr[i];
        
    }
    int maxs=sums[k-1];
    for(int i=1; i<=n-k; i++){
        int a=i, b=k+i-1;
        maxs=max(maxs, sums[b]-sums[a-1]);
    }
    

    cout<<maxs;


}