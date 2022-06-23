#include <iostream>
using namespace std;

int airHockey(int a, int b) {
  if(a>b) {
    return 7-a;
  } else {
    return 7-b;
  }
}

int main() {
  int T;
  cin>>T;

  int w[T], c[T];

  for (int i=0; i<T; i++) {
    cin>>w[i];
    cin>>c[i];
  }

  for(int i=0; i<T; i++) {
    cout<<airHockey(w[i], c[i])<<endl;
  }

  return 0;
}