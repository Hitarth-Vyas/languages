#include <iostream>
using namespace std;

// take sorted array to apply this function

bool pairsum(int arr[], int n, int k) {
  int low=0;
  int high=n-1;

  while (low<high) {
    if (arr[low]+arr[high]==k) {
      cout<<low<<" "<<high<<endl;
      return true;
    }
    else if(arr[low]+arr[high]>k) {
      high--;
    }
    else {
      low ++;
    }
  }

  return false;
}

int main() {
  int n, k;
  cin>>n>>k;

  int arr[n];
  for (int i=0; i<n; i++) {
    cin>>arr[i];
  }

  // for(int i=0; i<n; i++) {
  //   for(int j=i+1; j<n; j++){
  //     if (arr[i]+arr[j] == k) {
  //       cout<<i<< " "<<j;
  //       return 0;
  //     }
  //   }
  // }

  // cout<<"Pair sum equals to k does not exist";

  cout<<pairsum(arr, 8, k)<<endl;

  return 0;
}