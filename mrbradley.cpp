#include <bits/stdc++.h>

using namespace std;


int main(){
    int N;
    cin >> N;
    int arr[N];
    int minsum[N];
    
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    minsum[0] = arr[0];
    int ans = minsum[0];
    
    for(int i=1; i<N; i++){
        minsum[i] = min(minsum[i-1] + arr[i], arr[i]);
        ans = min(ans, minsum[i]);

    }
    cout << ans;



}