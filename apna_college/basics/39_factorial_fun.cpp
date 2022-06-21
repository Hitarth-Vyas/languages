#include<iostream>
using namespace std;

int factRecur(int n){
    if(n==0){
        return 1;
    }
    return n*factRecur(n-1);
}

int factRegress(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cin>>n;

    // cout<<factRecur(n);
    cout<<factRegress(n);

    return 0;
}