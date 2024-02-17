#include <bits/stdc++.h>

using namespace std;


int main(){

    int N, C, K, first, last, maxsum, sum;
    maxsum = 0;
    sum = 0;
    multiset<int> ms;
    cin >> N >> C >> K;
    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];

    }
    for(int i=0; i<K+1; i++){
        ms.insert(arr[i]);
        first = arr[0];
        last= arr[K+1];
        int count = 0;
        sum=0;
        for (auto it= --ms.end(); count < C; it--){
            sum += *it;
            count ++;
        }
        maxsum = max(maxsum, sum);



    }
    for (int i=0; i<(N-K+1); i++){
        ms.erase(ms.find(first));
        ms.insert(last);
        first = arr[i];
        last = arr[K+1+i];
        int count = 0;
        sum=0;
        for (auto it= --ms.end(); count < C; it--){
            sum += *it;
            count ++;
        }
        maxsum = max(maxsum, sum);

        


    }

    cout << maxsum;
}