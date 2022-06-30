#include <iostream>
using namespace std;

int main() {
  int T;
  cin>>T;

  for (int i = 0; i < T; i++) {
    int n;
    cin>>n;

    int b[n];
    for(int i=0; i<n; i++) {
      cin>>b[i];
    }

    int sum=0;
    for (int i=0; i<n; i++) {
      sum += b[i];
    }

    int asum = sum/(n+1);

    int a[n];
    for (int i=0; i<n; i++) {
      a[i] = b[i]-asum;
    }

    for (int i=0; i<n; i++) {
      cout<<a[i]<<" ";
    }
    cout<<endl;
  }

  return 0;
}