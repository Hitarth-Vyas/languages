#include <iostream>
using namespace std;

int ACS(int a) {
  if (a==0) {
      return 0;
  }
  for (int i=0; i<10; i++) {
    if(a>=100) {
      if(a-100==0) {
        return i+1;
      }
      a-=100;
    }
    else if(a<100 || a>=1) {
      if (a-1==0)
        return i+1;
      a-=1;
    }
    else {
      return -1;
    }
  }

  return -1;
}

int main() {
  int T; 
  cin>>T;

  int arr[T];
  for (int i=0; i<T; i++) {
    cin>>arr[i];
  }

  for(int i=0; i<T; i++) {
    cout<<ACS(arr[i])<<endl;
  }

  return 0;
}