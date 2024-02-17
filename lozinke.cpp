#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    unordered_map<string, int> um;
    string arr[N];
    int count;
    for(int i=0; i<N; i++){
        string h;
        cin >> h;
        arr[i]=h;
        auto findz = um.find(h);
        if(findz != um.end()){
            um[h] +=1;
        }
        else{
            um.insert(make_pair(h, 1));
        }

    }

    unordered_set<string> substringz;

    for (int i=0; i<N; i++){
        string h = arr[i]; // current string it is making substrings for
        for(int x=0; x<h.length(); x++){
            for(int y=1; y<=h.length()-x; y++){
                substringz.insert(h.substr(x, y)); // making a substring for that string
            }
        }
        for(auto it=substringz.begin(); it!=substringz.end(); it++){
            for(int f=0; f<N; f++){
                if((*it) == arr[f]){
                    count += um[arr[f]];
                }
                if((*it) == h){
                    count -=1;
                }

            }
        }


    }
        
  

    

    cout << count;


}