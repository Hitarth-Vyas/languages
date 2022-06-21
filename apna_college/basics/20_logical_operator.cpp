#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // if(n%2 == 0 && n%3 == 0){
    //     cout<<"Divisible by both"<<endl;
    // }

    // else if(n%2 == 0){
    //     cout<<"Divisible by 2"<<endl;
    // }

    // else if(n%3 == 0){
    //     cout<<"Divisible by 3"<<endl;
    // }

    // else{
    //     cout<<"Divisible by none"<<endl;
    // }

    n%2 == 0? (cout<<"Even"<<endl, cout<<"Hurray"<<endl) : cout<<"Odd"<<endl;

    return 0;
}