#include <iostream>
using namespace std;

int main() {
  int a=10;       // stored in stack

  int *p = new int();    // used to allocate memory in heap
  *p=10;    // p is pointer stored in stack and pointing memory in heap
  delete(p);      // deallocate memory in heap but pointer will be there only which is called as dangling pointer so we have to remove pointer also
  p=new int[4];   //pointer pointing an array of size 4 storing address of first element

  delete[] p;    // it deletes block of memory
  p=NULL;    

  return 0;
}