#include <iostream>
using namespace std;

int main() {
  int c=15, sum=15, w=15;

  while (w>=3) {
    int q, r;
    q = w/3;
    r = w%3;
    sum += q;
    w = q+r;
  }

  cout<<sum;

  return 0;
}