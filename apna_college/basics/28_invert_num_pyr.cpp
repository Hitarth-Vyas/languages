#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=n; i>=1; i--){
        // int k = 1;
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
            // k++;
        }
        cout<<endl;
    }
}