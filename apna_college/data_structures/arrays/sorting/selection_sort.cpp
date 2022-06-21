#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
  for (int i=0; i<n-1; i++) {
    int min = i;
    for (int j=i+1; j<n; j++) {
      if (arr[min]>arr[j]) {
        min = j;
      }
    }
    // cout<<'-'<<arr[min]<<'-';
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }

  for (int j=0; j<n; j++) {
    cout<<" "<<arr[j];
  }
}

void acSelSort(int arr[], int n) {
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      if (arr[j]<arr[i]) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }

  for (int j=0; j<n; j++) {
    cout<<arr[j];
  }
}

int main() {
  int n;
  cin>>n;
  
  int arr[n];

  for(int i=0; i<n; i++)
    cin>>arr[i];

  selectionSort(arr, n);

  // acSelSort(arr, n);

  return 0;
}