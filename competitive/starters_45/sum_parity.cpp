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

    int ptr = b[0];
    for(int i=0; i<n; i++) {
      if (i != n-1) {
        ptr = (ptr+b[i+1])%2;
      }
      else {
        ptr = (ptr+b[0])%2;
      }
    }
    ptr==b[0] ? cout<<"YES"<<endl : cout<<"NO"<<endl;
  }

  return 0;
}