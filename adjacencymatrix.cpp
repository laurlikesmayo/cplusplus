#include <bits/stdc++.h>

using namespace std;

int main(){
    int V, E, A, B;
    int graph[50][50];



    cin >> V >> E;
    memset(graph, -1, sizeof(graph));
    
    for(int i=0; i<50; i++){
        for(int j=0; j<50; j++){
            graph[i][j] = 0;
        }
    }

    for(int i=0; i<E; i++){
        cin >> A >> B;
        graph[A][B] = 1;
        graph[B][A] = 1;

    }

    for(int i=0; i<V-1; i++){
        cout << endl;
        for(int j=0; j<E; j++){
            cout<<graph[i+1][j];
        }
    }




}