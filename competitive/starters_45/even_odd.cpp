#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int T;
  cin>>T;

  for (int i = 0; i < T; i++) {
    int n;
    cin>>n;

    int b[2*n];
    for(int i=0; i<2*n; i++) {
      cin>>b[i];
    }

    int ecount=0;
    for (int i=0; i<2*n; i++) {
      if (b[i]%2==0) {
        ecount++;
      }
    }

    cout<<abs(n-ecount)<<endl;
  }

  return 0;
}