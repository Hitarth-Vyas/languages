#include <iostream>
using namespace std;

int main() {
  int row, col;
  cin>>row>>col;

  int arr[row][col];
  for(int i=0; i<row; i++) {
    for (int j=0; j<col; j++) {
      cin>>arr[i][j];
    }
  }

  int atr[col][row];
  for(int i=0; i<col; i++) {
    for(int j=0; j<row; j++) {
      atr[i][j] = arr[j][i];
    }
  }

  cout<<"Matrix is:\n";
  for(int i=0; i<col; i++) {
    for(int j=0; j<row; j++) {
      cout<<atr[i][j]<<" ";
    }
    cout<<"\n";
  }

  return 0;
}