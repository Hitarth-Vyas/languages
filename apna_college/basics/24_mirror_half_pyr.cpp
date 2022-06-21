#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Height: ";
    cin>>n;

    // for(int i = n; i>=1; i--){
    //     for(int j = i-1; j>=1; j--){
    //         cout<<" ";
    //     }
    //     for(int k = 1; k<=n-i+1; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(j <= n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}