#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    int arrx[N];
    int arry[N];

    for(int i=0; i<N; i++){
        cin >> arrx[i] >> arry[i];
    }

    sort(arrx, arrx + N);
    sort(arry, arry + N);

    int medX = arrx[N/2];
    int medY = arry[N/2];

    cout << medX << " " << medY;

    return 0;
}
