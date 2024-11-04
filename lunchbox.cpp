#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; int m;
    cin >> n >> m;
    long long arr[m];
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }
    sort(arr, arr+m);
    int total = n; int count = 0; int x=0;
    while (total > 0){
        if((total - arr[x]) > 0){
            total -= arr[x];
            count++;
            x++;
        }
        else{
            break;
        }   
    }
    cout<<count;
}