#include <iostream>
#include <limits.h>
using namespace std;

int main() {
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  for (int i=0; i<n; i++) {
    int key = arr[i];
    for (int j=i+1; j<n; j++) {
      if (key == arr[j]){
        cout<<i+1;
        return 0;
      }
    }
  }

  // By apna college

  const int N = 1e4+2;
  int idx[N];

  for(int i=0; i<N; i++) {
    idx[i] = -1;
  }

  int minidx = INT_MAX;

  for (int i=0; i<n; i++) {
    if(idx[arr[i]] != -1) {
      minidx = min(minidx, idx[arr[i]]);
    }
    else {
      idx[arr[i]] = i;
    }
  }

  if (minidx == INT_MAX) {
    cout<<"-1"<<endl;
  } else {
    cout<<minidx+1<<endl;
  }

  return 0;
}