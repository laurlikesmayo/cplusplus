#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int arr[N];

  for (int x = 0; x < N; x++) {
    cin >> arr[x];
  }

  
  for (int x = 0; x<N - 1; x++){
    int minIndex = x;
    for (int y = x+1; y < N; y++){
        if (arr[y] < arr[minIndex]){
            minIndex = y;
        }
    }
    int temp = arr[minIndex];
    arr[minIndex]= arr[x];
    arr[x] = temp;
  }

  for (int x = 0; x < N; x++) {
    cout << arr[x] << " ";
  }
  return 0;
}
