#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
 
    int N;
    cin >> N;
    
    vector<int> active_subsequence_ends;
 
    for(int x = 0; x < N; x++) {
        int a;
        cin >> a;

        if(a > active_subsequence_ends.back()){
            active_subsequence_ends.push_back(a);


        }
        else{
            auto it = lower_bound(active_subsequence_ends.begin(), active_subsequence_ends.end(), a);
            *it = x;
        }
        // get the next element in the input
 
        // check if the next element is greater than the last element of vector b
 
        // if greater, append to b
 
        // else, use lower_bound to identify the iterator at which to update the value in vector b
    }
    cout << active_subsequence_ends.size();
 
	return 0;
}
 


