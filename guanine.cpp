#include <bits/stdc++.h>

using namespace std;


int main(){
    int N;
    cin >> N;
    deque<string> dq;
    vector<string> query;
    for(int i=0; i<N; i++){
        
        string cmd;
        string val;

        cin >> cmd >> val;

        if (cmd == "ADD_BACK"){
            dq.push_back(val);

        }
        else if (cmd == "ADD_FRONT"){
            dq.push_front(val);
        }
        else if (cmd == "SNIP_BACK"){
            int e = dq.size();
            for(int i=0; i<(e-(stoi(val)+1)); i++){
                dq.pop_back();
            }

        }
        else if (cmd == "SNIP_FRONT"){
            for(int i=0; i<stoi(val)+1; i++){
                dq.pop_front();
            }
        }
        else if (cmd == "QUERY"){
            query.push_back(dq[stoi(val)]);

        }

       
    }
    
 for(int i=0; i<query.size(); i++){
            cout << query[i] << endl;
        }

  




}