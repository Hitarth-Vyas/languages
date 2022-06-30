#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int temp=*a;
  *a=*b;
  *b=temp;
}

int main() {
  int a=2, b=4;

  // int *aptr=&a, *bptr=&b;

  // swap(a, b);
  swap(&a, &b);            // swap(aptr, bptr);
  // cout<<*aptr<<" "<<*bptr<<endl;
  cout<<a<<" "<<b<<endl;

  return 0;
}