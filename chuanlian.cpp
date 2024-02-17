#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c, k;
    cin >> n >> c >> k;
    int maxs = 0;
    multiset<int> ms;
    for(int i=0; i<n; i++){
        if(ms.size() < k){
            int a;
            cin >> a;
            ms.insert(a);
        }
        else{
            int val = 0;
            for(int j=0; j<c; j++){
                val+=*(ms.begin());
                ms.erase(ms.find(*(ms.begin())));
            }
            cout<<"val: " << val << " max: " << maxs;
            i--;
            maxs = max(val, maxs);

        }
    }
    cout<<maxs;
}