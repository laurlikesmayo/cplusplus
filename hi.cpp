#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    stack<int> pos;
    pos.push(0);

    for(int i=0; i<K; i++){
        string F;
        cin >> F;
        if(F == "undo"){
            cin >> F;
            for (int i=0; i<stoi(F); i++){
                pos.pop();
            }
        }
        else{
            int temppos=0;
            temppos = (pos.top() + stoi(F)) % N;
            pos.push(temppos);
        }

    }
    if (pos.top() < 0){
        cout << pos.top() + N;
    }
    else{
        cout << pos.top();
    }
    

        
  

}