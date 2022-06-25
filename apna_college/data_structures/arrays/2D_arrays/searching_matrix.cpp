#include <iostream>
using namespace std;

int main() {
  int m, n, x;
  cin>>m>>n>>x;
  int arr[m][n];
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      cin>>arr[i][j];
    }
  }
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      if (arr[i][j] == x) {
        cout<<"Row: "<<i<<"; Col: "<<j<<endl;
      }
    }
  }

  // cout<<"Element not found";

  return 0;
}