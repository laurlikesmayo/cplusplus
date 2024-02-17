#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    priority_queue<int> pq;
    for(int i=0; i<n; i++){
        cin>> arr[i];
        if (i<k){
            pq.push(arr[i]);
        }
    }
    int maxs = 0;
    int satis = 0;
    while(!pq.empty()){
        satis += pq.top();
        pq.pop();
        if (k < n) {
            pq.push(arr[k]);
            k++;
        }
        maxs = max(maxs, satis);

    }
    cout<<maxs;


}