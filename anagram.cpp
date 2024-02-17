#include <bits/stdc++.h>

using namespace std;

int main(){
    map<char, int> mp;
    map<char, int> mp2;
    string s;
    getline(cin, s);
    for(std::string::iterator it = str.begin(); it != str.end(); ++it) {
        do_things_with(*it);
    }
    if (ispunct(ch) or ch ==' '){
            
    }
    else if(mp.find(tolower(ch)) != mp.end()){
        mp.insert(make_pair(tolower(ch), 1));

    }
    else{
        mp[ch] = mp[ch]+1;
    }
    

while(cin >> ch){
        if(ch == '\n'){
            break;
        }
        if(mp2.find(ch) != mp2.end()){
            mp2.insert(make_pair(ch, 1));

        }
        else{
            mp2[ch] = mp2[ch]+1;
        }
    }


    
    int yes = 1;
    if (mp.size() != mp2.size()){
         //here is the bug
        cout << mp.size() << " " << mp2.size();
        cout << "NO!";
        cout << "Different size";
        yes = 0;
        return 0;
    }

    for (auto it=mp.begin(); it != mp.end(); it++){
        char ch = it->first;
        if (it->second != mp2[ch]){
            cout << "NO!";
            cout << "Different character";
            yes = 0;
            return 0;
        }
        
    }
    if (yes == 1){
        cout << "YES!";
    }


}