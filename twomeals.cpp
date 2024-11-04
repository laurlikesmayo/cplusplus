#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxsum[n];
    int ans = maxsum[0] = 0;
    for(int i=1; i<n; i++){
        maxsum[i] = max(maxsum[i-1]+arr[i], arr[i]);
        ans = max(ans, maxsum[i]);
    }
    

    
}