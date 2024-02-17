#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, K;
    cin >> N >> K;
    vector <long long> arr;
    for (int i=0; i<N; i++){
        int hi;
        cin >> hi;
        arr.push_back(hi);

    }
    priority_queue <int> pq;
    long long max_satis=0;
    long long satis=0;
    for(int x=0; x<K; x++){
            pq.push(arr[x]);

        }
    
    for(int i=K; i<N; i++){
       
        
        satis += pq.top();
        cout << pq.top() << " ";
        pq.pop();
        pq.push(arr[i]);
        
        
        max_satis = max(satis, max_satis); 
    }

    while(pq.empty() != true){
         
        satis += pq.top();
        cout << pq.top() << " ";
        pq.pop();
        max_satis = max(satis, max_satis); 
    }
    cout << max_satis;

}
