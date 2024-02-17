#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[N];
    }
    int lis[N];
    int mazx = 1;

    for (int i=0; i<N; i++){
        if (i==0){
            lis[i] == 1;

        }
        else{
            lis[i]==1;
            for (int y=0; y<i; y++){
                if (arr[y] < arr[i]) {
                    lis[i] = max(lis[i], lis[y]+1);
                }
            }
        }
        

    }

    for (int i=0; i<N; i++){
        mazx = max(mazx, lis[i]);
    }
    cout << mazx;
    
    


}