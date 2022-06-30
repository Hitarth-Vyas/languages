#include <iostream>
using namespace std;

void reverse(int arr[], int l, int h, int n) {
  while (l<h) {
    int temp = arr[l];
    arr[l] = arr[h];
    arr[h] = temp;

    l++; h--;
  }
}

bool reverseSort(int arr[], int n, int x) {
  int sum;
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      sum+=arr[j];
      if (sum<=x && arr[i]>arr[j]) {
        reverse(arr, i, j, n);
      }
    }
  }

  cout<<"[";
  for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<"]"<<endl;

  for (int i=0; i<n-1; i++) {
    if (arr[i]>arr[i+1])
      return 0;
  }

  return 1;
}

int main() {
  int T; 
  cin>>T;

  for (int i = 0; i < T; i++)
  {
    int N, X;
    cin>>N;

    int arr[N];
    for (int j=0; j<N; j++) {
      cin>>arr[j];
    }

    if (reverseSort(arr, N, X) == 0) {
      cout<<"NO"<<endl;
    }
    else {
      cout<<"YES"<<endl;
    }
  }

  return 0;
}