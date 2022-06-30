#include <iostream>
using namespace std;

void DNA(string s) {
  for(int i=0; i<s.length(); i++) {
    if (s[i]=='A'){
      s[i] = 'T';
    }
    else if (s[i]=='T'){
      s[i] = 'A';
    }
    else if (s[i]=='C'){
      s[i] = 'G';
    }
    else if (s[i]=='G'){
      s[i] = 'C';
    }
  }

  cout<<s;
}

int main() {
  int T; 
  cin>>T;

  int len[T];
  string s, str[T];

  for (int i=0; i<T; i++) {
    s="";
    cin>>len[i];
    for (int j=0; j<len[i]; j++) {
      char c;
      cin>>c;
      s+=c;
    }
    str[i] = s;
  }
  
  for(int i=0; i<T; i++) {
    DNA(str[i]);
    cout<<endl;
  }

  return 0;
}