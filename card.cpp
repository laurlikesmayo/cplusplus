#include <bits/stdc++.h>


using namespace std;

int main(){
    int M, K;
    cin >> M >> K;
    deque<int> nums;
    string cmd;
    vector<char> commands;

    for(int i=0; i<M; i++){
        nums.push_back(i);
    }
    cin >> cmd;
    for(int i=0; i<cmd.size(); i++){
        if(cmd[i] != '.'){
            commands.push_back(cmd[i]);
        }
        else{
            break;
        }
    }
    
    for(int i=0; i<commands.size(); i++){
        if (commands[i] == 'A'){
            int temp = nums[0];
            nums.pop_front();
            nums.push_back(temp); 

        }
        if (commands[i] == 'B'){
            int tempA = nums[0];
            int tempB = nums[1];
            nums.pop_front();
            nums.pop_front();
            nums.push_back(tempB);
            nums.push_front(tempA);
        }
    }

    
    cout << nums[K-1] << " " << nums[K] << " "<< nums[K+1];
    

    }
