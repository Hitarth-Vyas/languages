#include <iostream>
using namespace std;

int main() {
  int T; 
  cin>>T;

  int arr[T];
  for (int i=0; i<T; i++) {
    cin>>arr[i];
  }

  for(int i=0; i<T; i++) {
    cout<<10*arr[i]<<endl;
  }

  return 0;
}