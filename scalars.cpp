#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr1[N];
    int arr2[N];
    for (int i=0; i<N; i++){
        cin >> arr1[i];
    }
    for (int i=0; i<N; i++){
        cin >> arr2[i];
    }
    sort(arr1, arr1+N);
    sort(arr2, arr2+N);

    int total = 0;

    for (int i=0; i<N; i++){
        total += arr1[i] * arr2[N-i-1];
    
    }

    cout << total;

    return 0;



}