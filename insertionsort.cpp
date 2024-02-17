#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int arr[N];

  for (int x = 0; x < N; x++) {
    cin >> arr[x];
  }

  for (int x = 0; x < N-1; x++){
    for (int y=x; y>=0; y--){
      if (arr[y] > arr[y - 1]){
        int temp = arr[y];
        arr[y] = arr[y+1];
        arr[y+1]=temp;
        
      }
      else{
        break;
      }
    }
  }

  for (int x = 0; x < N; x++) {
    cout << arr[x] << " ";
  }
  return 0;
}


