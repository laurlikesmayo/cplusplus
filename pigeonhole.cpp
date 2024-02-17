#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, H;
    cin >> N >> H;
    int arr[H];
    vector<int> hello;
    for(int i=0; i<H; i++){
        arr[i]=0;
    }
    multiset<int> max;
    for (int i=0; i<H; i++){
        max.insert(0);
    }
    for(int i=0; i<N; i++){
        int t, prev, p;
        int hole=0;
        cin >> t >> p;
        hole = p % H;
        prev = arr[hole];
        if(t==1){
            arr[hole] += 1;
            max.erase(max.find(prev));
            max.insert(arr[hole]);
            //prev = arr[hole];

        }
        else{
            arr[hole] -= 1;
            max.erase(max.find(prev));
            max.insert(arr[hole]);
            //prev = arr[hole];
            
        }
        hello.push_back(*(--max.end()));


    }
    for(int i=0; i<hello.size(); i++){
        cout << hello[i] << endl;
    }

    

}