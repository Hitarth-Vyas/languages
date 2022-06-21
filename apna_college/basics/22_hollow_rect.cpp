#include<iostream>
using namespace std;

int main(){
    int r, c;
    cout<<"Rows: ";
    cin>>r;
    cout<<"Columns: ";
    cin>>c;

    for(int i = 1; i<=c; i++){
        for(int j = 1; j<=r; j++){
            if(i == 1 || i==c){
                cout<<"*";
            }
            else{
                if(j == 1 || j == r){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            // if(i == 1 || i==c || j == 1 || j == r){
            //     cout<<"*";
            // }
            // else{
            //     cout<<" ";
            // }
        }
        cout<<endl;
    }

    return 0;
}