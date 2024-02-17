#include <bits/stdc++.h>
using namespace std;
bool compare(const pair<int, int>&i, const pair<int, int>&j) 
{ 
    return i.second < j.second; 
} 
int main(){
    int l, n;
    cin >> l >> n;
    int lis[n], maxs=0;
    pair<int, int> people[n];
    for(int i=0; i<n; i++){
        int t, s;
        cin >> t >> s;
        people[i] = make_pair(t, l/s+t);
    }
    sort(people, people+n, compare);
    for(int i=0; i<n; i++){
        lis[i] = 1;
        for(int j=0; j<i; j++){
            if(people[i].first < people[j].first){
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
        maxs = max(maxs, lis[i]);
    }
    cout<<maxs;
}