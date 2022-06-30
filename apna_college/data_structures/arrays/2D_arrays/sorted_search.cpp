#include <iostream>
using namespace std;

int main() {
  int n, m, key;
  cin>>n>>m>>key;

  int arr[m][n];
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      cin>>arr[i][j];
    }
  }

  int r=0, c=m-1;
  bool found=false;
  while(r<n && c>=0) {
    if(arr[r][c]==key) {
      found = true;
    }
    if(arr[r][c]>key) {
      c--;
    }
    else {
      r++;
    }
  }

  cout<<found;

  return 0;
}