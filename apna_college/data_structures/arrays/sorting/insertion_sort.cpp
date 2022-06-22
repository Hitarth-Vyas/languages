#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
  for(int i=1; i<n; i++){
    int index = arr[i];
    int j;
    for(j=i-1; j>=0 && arr[i]<arr[j]; j--) {
      arr[j+1] = arr[j];
    }
    arr[j+1] = index;
  }

  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main() {
  int n;
  cin>>n;

  int arr[n];

  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  insertionSort(arr, n);

  return 0;
}