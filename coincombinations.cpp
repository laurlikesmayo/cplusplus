#include <bits/stdc++.h>

using namespace std;
int N, V, coin[1001], hello[1001][1001];
int ways(int i, int v){
        if(v==0){ //if there is no value
            return 1;
        }
        if(i==0){ // if there are no coins
            return 0;
        }
       // cout << hello[i][v] << "hello1";
        if(hello[i][v] == -1){
            //cout << hello[i][v] << "hello2";
            if(v >= coin[i]){ // if the value is greater or equal to coin i
                hello[i][v] = ways(i,v-coin[i]) + ways(i-1, v); // add up both ways and if coin i is used
            }
            else{
                hello[i][v] = ways(i-1, v);

            }
            
        }
        return hello[i][v];
    }
int main(){
    
    cin >> N >> V;
    coin[0] = 0;
    for(int i=1; i<=N; i++){
        cin >> coin[i];
        //cout << coin[i];
    }
    
    for (int i=0; i<=N; i++){
        for(int m=0; m<=V; m++){
            hello[i][m] = -1;

        }
    }
    cout << ways(N, V) << endl;

    return 0;

}