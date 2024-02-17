#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, find;
  cin >> n >> find;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  sort(arr, arr+n);
  int startp=0; 
  int endp=n;
  while(endp-startp > 1){
    int midp = (startp+endp)/2;
    if (arr[midp] > find){
      endp = midp;
    }
    else if (arr[midp] < find){
      startp = midp;
    }
    else{
      cout << "found at index: " << midp;
      break;
    }

  }
}

