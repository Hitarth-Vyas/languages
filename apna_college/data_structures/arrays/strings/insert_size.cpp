#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1="Jagatha";

  s1.insert(3, "ann");
  cout<<s1<<endl;
  cout<<s1.size()<<endl;

  for (int i=0; i<s1.length(); i++) {
    cout<<s1[i]<<endl;
  }

  return 0;
}