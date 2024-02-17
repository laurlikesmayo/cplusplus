#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    int height_limit[N+1][N+1];
    memset(height_limit, 0, sizeof(height_limit));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int x;
            cin >> x;
            height_limit[i][j] = x;
        }
    }

    for(int k=0; k<N; k++){
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(height_limit[i][k] == 0 || height_limit[k][j] == 0){
                    continue;
                }
                if(height_limit[i][j] == 0 || min(height_limit[i][k], height_limit[k][j]) > height_limit[i][j]){
                    height_limit[i][j] = min(height_limit[i][k], height_limit[k][j]);

                }
            }
        }
    }

    int mini = height_limit[0][0];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(height_limit[i][j] > 0){
                mini = min(mini, height_limit[i][j]);

            }
        }
    }

    cout << mini;
}