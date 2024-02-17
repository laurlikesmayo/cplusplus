#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n], minsum[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = minsum[0]=0;
    for(int i=1; i<n; i++){
        minsum[i]=min(minsum[i-1]+arr[i], arr[i]);
        ans=min(ans, minsum[i]);
    }
    cout<<ans;
}