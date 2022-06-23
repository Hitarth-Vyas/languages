#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  int arr[n];
  for (int i=0; i<n; i++)
    cin>>arr[i];

  // int found;
  // for (int i=0; i<n; i++) {
  //   found=0;
  //   for (int j=0; j<n; j++) {
  //     if (arr[j] == i)
  //       found=1;
  //   }
  //   if (found==0) {
  //     cout<<i;
  //     return 0;
  //   }
  // }

  // if(found==1){
  //   cout<<n;
  // }

  // Apna College

  const long N = 1e6+2;
  bool check[N];
  for(int i=0; i<N; i++) {
    check[i] = 0;
  }

  for (int i=0; i<n; i++) {
    if(arr[i] >= 0) {
      check[arr[i]] = 1;
    }
  }
  int ans = -1;
  for (int i=0; i<N; i++){
    if (check[i] == 0){
      ans = i;
      break;
    }
  }

  cout<<ans;

  return 0;
}