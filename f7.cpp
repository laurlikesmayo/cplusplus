#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    int points[N];
    for(int i=0; i<N; i++){
        cin >> points[i];
    }

    //sort the points 
    sort(points, points+N, greater<int>());


    int finalpoints[N];
    for(int i=0; i<=N; i++){
        finalpoints[i] = points[i] + i+1;
        
    }
    int prefix_max[N];
    prefix_max[0] = 0;
    for(int x=1; x<=N; x++){
        prefix_max[x] = max(prefix_max[x-1], finalpoints[x]);
    }
    int win = 1;

    for (int i=1; i<=N; i++){
        if((points[i]+N) >= prefix_max[i-1] ){
            win +=1;
        }
    }

    cout << win;
}

