#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B;
    cin >> N, A, B ;


    pair<int, int> buildings[N];

    for (int i=0; i<N; i++){
        int x, y;
        cin >> x >> y;
        buildings[i] = {abs(x-A) + abs(y-B), i+1};

    }

    stable_sort(buildings, buildings+N);
    for (int i=0; i<N; i++){
        cout << buildings[i].second << " ";
    }

    

    return 0;


}