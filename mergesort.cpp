#include <iostream>
using namespace std;




void merge(int arr[],int length){

    int startA = 0;
    int endA = length/2 -1;
    int startB = length/2;
    int endB = length-1;
    int temp[length];
    for (int x=0; x<8; x++){
        if (startA > endA){
            temp[x] = arr[startB];
            startB++;
        
        }else if (startB > endB){
            temp[x] = arr[startA];
            startA++;
        }else{
            if(arr[startA] > arr[startB]){
                temp[x] = arr[startB];
                startB++;
            }
            else if(arr[startB] >= arr[startA]){
                temp[x] = arr[startA];
                startA++;
            }
        }
    }
    for (int x=0; x<length; x++){
        cout << temp[x] << " ";
    }



}




int main(){
    int arr[8] = {1, 2, 3, 4, 2, 4, 7, 8};
    merge(arr, 8);
    return 0;
    
}