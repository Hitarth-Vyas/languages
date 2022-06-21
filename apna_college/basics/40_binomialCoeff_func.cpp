#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

int binCoeff(int n, int r){
    if(n < r){
        cout<<"Enter an valid input";
    }
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int n, r;
    cin>>n>>r;

    cout<<binCoeff(n, r);

    return 0;
}