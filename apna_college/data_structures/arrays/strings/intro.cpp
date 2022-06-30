#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;

  // cin>>str;
  // cout<<str;

  // string str1(5, 'n');
  // cout<<str1;

  // string str = "ApniKaksha";     // Note: haven't given spaces
  getline(cin, str);
  cout<<str<<endl;

  return 0;
}