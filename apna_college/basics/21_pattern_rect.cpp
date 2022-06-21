#include<iostream>
using namespace std;

int main(){
    int c, r;
    cout<<"Enter the number of columns ";
    cin>>c;
    cout<<"Enter the number of rows ";
    cin>>r;

    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=c; j++){
            cout<<"*";
        } 
        cout<<"\n";
    }

    return 0;
}