#include<iostream>
using namespace std;

int sum(int n){
    int s = 0;
    for(int i=1; i<=n; i++){
        s += i;
    }
    return s;
}

int sumFormula(int n){
    return (n*(n+1))/2;
}

int main(){
    int n;
    cin>>n;

    cout<<sumFormula(n);

    return 0;
}