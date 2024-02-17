#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    unordered_set<int> nums;
    for(int i=0; i<N; i++){
        int h;
        cin >> h;
        nums.insert(h);
    }
    cout << nums.size();
}