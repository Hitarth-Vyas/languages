#include <iostream>
using namespace std;

int main() {
  int T;
  cin>>T;

  for (int i = 0; i < T; i++) {
    int x, y;
    cin>>x>>y;

    cout<<max(x, y)<<endl;
  }

  return 0;
}