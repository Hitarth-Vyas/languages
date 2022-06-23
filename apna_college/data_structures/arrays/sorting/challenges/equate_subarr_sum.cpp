#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  int S;
  cin>>S;

  int arr[n];
  for (int i=0; i<n; i++)
    cin>>arr[i];
  
  int sum=0;

  for (int i=0; i<n; i++) {
    for (int j=i; j<n; j++) {
      sum += arr[j];
      if (sum == S) {
        cout<<i+1<<' '<<j+1;
        return 0;
      }
    }
    sum=0;
  }

  return 0;
}