#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = 0;
    int b = n;

    while(n != 0){
        int rem = n%10;
        a += pow(rem,3);
        n /= 10;
    }

    if(b == a){
        cout<<b<<" is a armstong number";
    }

    else{
        cout<<b<<" isn't a armstong number";
    }

    return 0;
}