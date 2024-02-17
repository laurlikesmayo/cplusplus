#include <bits/stdc++.h>

using namespace std;

int main(){
    int A[7] = {-4, -6, 4, 7, 2, 3, 0};
    int B[5] = {-4, -2, 0, 5, 3};
    int C[8] = {1, 3, 5, 4, -3, -5, -2, 2};
    int D[4] = {-5, -3, -2, 1};

    pair<int, pair<int, int>> AB[7* 5];
    pair<int, pair<int, int>> CD[8 * 4];
    int hi=0;
    for (int i=0; i<7; i++){
        for (int n=0; n<5; n++){
            
            AB[hi].first = A[i] + B[n];
            (AB[hi].second).first = A[i];
            (AB[hi].second).second = B[n];
            hi++;
        }
    }

    hi=0;
    for (int i=0; i<8; i++){
        for (int n=0; n<4; n++){
            
            CD[hi].first = C[i] + D[n];
            (CD[hi].second).first = C[i];
            (CD[hi].second).second = D[n];
            hi++;
        }
    }
    sort(CD.begin(), CD.end());
    for(int i=0; i< 35; i++){
        int start = 0;
        int end = 32;
        int search = AB[i].first * -1;
        int *answer = lower_bound(CD.begin(), CD.end(), search);
        

        if (answer.first = AB[i].first * -1){
            cout << (AB[i].second).first << (AB[i].second).second << (answer.second).first << (answer.second).second;

        }
    }


}