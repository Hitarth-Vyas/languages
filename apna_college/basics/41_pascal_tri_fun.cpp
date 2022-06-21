#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int binCoeff(int n, int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}

void pascalTri(int a){
    for(int i=0; i<a; i++){
        for(int j=0; j<=i; j++){
            cout<<binCoeff(i, j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    pascalTri(n);

    return 0;
}