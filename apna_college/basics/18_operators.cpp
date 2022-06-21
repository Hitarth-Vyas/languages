#include<iostream>
using namespace std;

int main(){
    int i = 1;
    // i = i++ + ++i;
    // cout<<i<<endl;

    int j = 2;
    int k;
    // k = i + j + i++ + j++ + ++i + ++j + i++;
    // cout<<i<<" "<<j<<" "<<k<<endl;

    i = 0;
    // i = i++ - --i + ++i - i--;
    // cout<<i<<endl;

    // i = 1, j = 2, k = 3;
    // int m = i-- - j-- - k--;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // cout<<k<<endl;
    // cout<<m<<endl;

    i = 10; j = 20;
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;

    return 0;
}