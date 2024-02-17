#include <bits/stdc++.h>

using namespace std;

list<int>:: iterator it_arr[1000005];
list<int> liszt;

void insert_before(int subId, int ref){
    auto ref_it = it_arr[ref];
    auto it = liszt.insert(ref_it, subId);
    it_arr[subId] = it;
}

void insert_after(int subId, int ref){
    auto ref_it = it_arr[ref];
    ref_it++;
    auto it = liszt.insert(ref_it, subId);
    it_arr[subId] = it;
}

int sub_before(int ref){
    auto ref_it = it_arr[ref];
    ref_it--;
    return *ref_it;
}


int sub_after(int ref){
    auto ref_it = it_arr[ref];
    ref_it++;
    return *ref_it;
}



int main(){
    vector<int> printout;
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        string cmd;
        int e;
        if (cmd == "push_back"){
            liszt.push_back(e);

        }
        if (cmd == "push_front"){
            liszt.push_front(e);
        }
         if (cmd == "pop_front"){
            liszt.pop_front();
        }
         if (cmd == "pop_back"){
            liszt.pop_back();
        }
         if (cmd == "erase"){
            for(list<int>::iterator it = liszt.begin(); it != liszt.end(); it++){
                if (*it == e){
                    liszt.erase(it);

                }

            }
        }
         if (cmd == "queue_front"){
            printout.push_back(*(liszt.begin()));
        }
         if (cmd == "queue_back"){
            printout.push_back(*(liszt.end()));
        }
         if (cmd == "insert_after"){
            // unfinishedfda
            // insert_after();
        }
         if (cmd == "push_front"){
            liszt.push_front(e);
        }

    }

}




