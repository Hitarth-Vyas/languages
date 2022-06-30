#include <iostream>
using namespace std;

int main() {
  int T; 
  cin>>T;

  for (int i = 0; i < T; i++)
  {
    int N;
    cin>>N;

    int arr[N];
    for (int j=0; j<N; j++) {
      cin>>arr[j];
    }

    int count[1001];
    for (int j=0; j<1001; j++) {
      count[j]=0;
    }

    for (int j=0; j<N; j++) {
      count[arr[j]]++;
    }

    int max=0;
    for (int j=0; j<1001; j++) {
      if (max < count[j]) {
        max = count[j];
      }
    }

    cout<<N-max<<endl;
  }

  return 0;
}