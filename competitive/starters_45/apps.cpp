#include <iostream>
using namespace std;

int main() {
  int T;
  cin>>T;

  for (int i = 0; i < T; i++) {
    int s, x, y, z;
    cin>>s>>x>>y>>z;

    int rs=s-x-y;
    int a = max(x,y);
    
    if (rs>=z) {
      cout<<0<<endl;
    }
    else if (rs<z && rs+a>=z) {
      cout<<1<<endl;
    }
    else {
      cout<<2<<endl;
    }
  }

  return 0;
}