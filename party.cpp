#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> friends[N+1];
    int A, B;
    int count = 0;
    bool invited[N+1];
    for(int i=0; i<M; i++){
        cin >> A >> B;
        friends[A].push_back(B);
        friends[B].push_back(A);
    }
    for(int i: friends[1]){

        count++;
        invited[i] = true;

        for (int j: friends[i]){
            if(invited[j] || j == 1){
                continue;
            }
            else{
                invited[j] = true;
                count++;
            }
        }
    }

    cout << count;


    

}