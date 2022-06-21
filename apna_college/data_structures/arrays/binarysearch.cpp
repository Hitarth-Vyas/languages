#include <iostream>
using namespace std;

int binarySearch (int arr[], int n, int key) {
  int h=n-1, l=0, mid;

  while (h>=l) {
    mid=(h+l)/2;

    if (arr[mid]==key)
      return mid;
    else if (arr[mid+1]<key)
      l=mid+1;
    else
      h=mid-1;
  }

  return -1;
}

int main () {
  int n;
  cin>>n;

  int arr[n];

  for (int i=0; i<n; i++)
    cin>>arr[i];

  int key;
  cin>>key;

  cout<<binarySearch(arr, n, key)<<endl;

  return 0;
}