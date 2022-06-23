#include <iostream>
using namespace std;

int Biryani(int a, int b) {
  return a*b;
}

int main() {
  int T;
  cin>>T;

  int w[T], c[T];

  for (int i=0; i<T; i++) {
    cin>>w[i];
    cin>>c[i];
  }

  for (int i=0; i<T; i++) {
    cout<<w[i]<<" ";
    cout<<c[i]<<endl;
  }

  for(int i=0; i<T; i++) {
    cout<<Biryani(w[i], c[i])<<endl;
  }

  return 0;
}