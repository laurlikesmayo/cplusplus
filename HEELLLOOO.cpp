#include <bits/stdc++.h>

using namespace std;

int mincoins(int v){
    if (v==0){
        return 0; //base case
    }
    int m= -1;
    
    for(int i=0; i<N; i++){
        if (v => C[i]) {
            if (m == -1){
                m = 1+mincoins(v - C[i]);
            }
            else{
                m = min(m, 1+mincoins(v, C[i]));

            }

        }
    }



}

int main(){
    
    long long coins[13] = {1000000, 500000, 100000, 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1};
    //1c, 5c, 10c, 50c, $1, $5, $10, $50, $100, $500, $1000, $5000 and $10000
    long long N;
    cin >> N;
    int i=0;
    int counter = 0;
    while (N > 0){
        if (N-coins[i] > 0){
            N-=coins[i];
            counter++;
        }
        else{
            i++;
        }


    }    
    cout << counter;

}


