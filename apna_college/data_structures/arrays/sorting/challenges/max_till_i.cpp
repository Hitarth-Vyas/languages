#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  int arr[n], max[n];
  for (int i=0; i<n; i++)
   cin>>arr[i];

  for (int i=0; i<n; i++){
  int mx = arr[0];
    for(int j=0; j<=i; j++){
      if (arr[j] > mx) {
        mx = arr[j];
      }
    }
    max[i] = mx;
  }

  for (int i=0; i<n; i++)
    cout<<max[i];

  return 0;
}