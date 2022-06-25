#include <iostream>
using namespace std;

int main() {
  int m, n;
  cin>>m>>n;

  int arr[m][n];
  int row_s = 0;
  int col_s = 0;
  int row_end = m-1;
  int col_end = n-1;
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      cin>>arr[i][j];
    }
  }

  cout<<"MAtrix is:\n";
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }

  // spiral order print

  while(row_s < row_end && col_s < col_end) {
    // for row_s
    for(int col=col_s; col <= col_end; col++) {
      cout<<arr[row_s][col]<<" ";
    }

    row_s++;
    
    // for col_end
    for(int row=row_s; row<=row_end; row++) {
      cout<<arr[row][col_end]<<" ";
    }

    col_end--;

    for (int col=col_end; col>=col_s; col--) {
      cout<<arr[row_end][col]<<" ";
    }

    row_end--;

    for (int row=row_end; row>=row_s; row--) {
      cout<<arr[row][col_s]<<" ";
    }

    col_s++;
  }

  return 0;
}